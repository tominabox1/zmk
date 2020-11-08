/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr.h>
#include <kernel.h>
#include <power/power.h>

#include <logging/log.h>

LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/usb.h>
#include <zmk/event-manager.h>
#include <zmk/events/position-state-changed.h>
#include <zmk/events/sensor-event.h>
#include <drivers/ext_power.h>

static u32_t power_last_uptime;

#define MAX_IDLE_MS CONFIG_ZMK_IDLE_SLEEP_TIMEOUT

bool is_usb_power_present() {
#ifdef CONFIG_USB
    return zmk_usb_is_powered();
#else
    return false;
#endif /* CONFIG_USB */
}

enum power_states sys_pm_policy_next_state(s32_t ticks) {
#ifdef CONFIG_SYS_POWER_DEEP_SLEEP_STATES
#ifdef CONFIG_HAS_SYS_POWER_STATE_DEEP_SLEEP_1
    s32_t current = k_uptime_get();
    if (power_last_uptime > 0 && !is_usb_power_present() &&
        current - power_last_uptime > MAX_IDLE_MS) {

#if IS_ENABLED(CONFIG_ZMK_EXT_POWER)
        struct device *ext_power = device_get_binding("EXT_POWER");
        if (ext_power == NULL) {
            LOG_ERR("Unable to retrieve ext_power device: EXT_POWER");
        } else {
            int rc = ext_power_disable(ext_power);

            if (rc != 0) {
                LOG_ERR("Unable to disable ext_power device: %d", rc);
            }
        }
#endif /* CONFIG_ZMK_EXT_POWER */

        return SYS_POWER_STATE_DEEP_SLEEP_1;
    }
#endif /* CONFIG_HAS_SYS_POWER_STATE_DEEP_SLEEP_1 */
#endif /* CONFIG_SYS_POWER_DEEP_SLEEP_STATES */

    return SYS_POWER_STATE_ACTIVE;
}

int power_event_listener(const struct zmk_event_header *eh) {
    power_last_uptime = k_uptime_get();

    return 0;
}

int power_init() {
    power_last_uptime = k_uptime_get();

    return 0;
}

ZMK_LISTENER(power, power_event_listener);
ZMK_SUBSCRIPTION(power, position_state_changed);
ZMK_SUBSCRIPTION(power, sensor_event);

SYS_INIT(power_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);