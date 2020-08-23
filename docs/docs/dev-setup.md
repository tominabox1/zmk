---
id: dev-setup
title: Basic Setup
sidebar_label: Basic Setup
---

import Tabs from '@theme/Tabs';
import TabItem from '@theme/TabItem';

export const OsTabs = (props) => (<Tabs
groupId="operating-systems"
defaultValue="debian"
values={[
{label: 'Debian/Ubuntu', value: 'debian'},
{label: 'Raspberry OS', value: 'raspberryos'},
{label: 'Fedora', value: 'fedora'},
{label: 'Windows', value: 'win'},
{label: 'macOS', value: 'mac'},
]
}>{props.children}</Tabs>);

## Prerequisites

A unix-like environment with the following base packages installed:

- Git
- Python 3
- `pip`
- `wget`
- devicetree compiler
- CMake
- `dfu-util`
- Various build essentials, e.g. gcc, automake, autoconf

<OsTabs>
<TabItem value="debian">
On Debian and Ubuntu, we'll use `apt` to install our base dependencies:

First, if you haven't updated recently, or if this is a new install,
you should update to get the latest package information:

```sh
sudo apt update
```

With the latest package information, you can now install the base dependencies:

```sh
sudo apt install -y \
	git \
	wget \
	autoconf \
	automake \
	build-essential \
        bzip2 \
	ccache \
	device-tree-compiler \
	dfu-util \
	g++ \
	gcc \
	libtool \
	make \
	ninja-build \
	cmake \
	python3-dev \
	python3-pip \
	python3-setuptools \
	xz-utils
```

:::note
Ubuntu 18.04 LTS release packages a version of CMake that is too old. Please upgrade to Ubuntu 20.04 LTS
or download and install CMake version 3.13.1 or newer manually.
:::
</TabItem>
<TabItem value="raspberryos">
On Raspberry OS, we'll use apt to install our base dependencies:

First, if you haven't updated recently, or if this is a new install,
you should update to get the latest package information:

```sh
sudo apt update
```

With the latest package information, you can now install the base dependencies:

```sh
sudo apt install -y \
	git \
	wget \
	autoconf \
	automake \
	build-essential \
        bzip2 \
	ccache \
	device-tree-compiler \
	dfu-util \
	g++ \
	gcc \
	libtool \
	make \
	ninja-build \
	cmake \
	python3-dev \
	python3-pip \
	python3-setuptools \
	xz-utils
```

</TabItem>
<TabItem value="fedora">

On Fedora, we'll use `dnf` to install our base dependencies:

#### DNF Update

First, if you haven't updated recently, or if this is a new install,
you should update to get the latest package information:

```sh
sudo dnf update
```

#### Install Dependencies

With the latest package information, you can now install the base dependencies:

```sh
sudo dnf install -y \
	git \
	wget \
	autoconf \
	automake \
        bzip2 \
	ccache \
	dtc \
	dfu-util \
	g++ \
	gcc \
	libtool \
	make \
	ninja-build \
	cmake \
	python3-devel \
	python3-pip \
	python3-setuptools \
	xz
```

</TabItem>
<TabItem value="win">

:::note
Use `cmd.exe` with these instructions rather than PowerShell.
:::

Chocolatey is recommended and used for the following instructions. You can manually install each of these applications and add them to your `PATH` if you don't want to use Chocolatey.

1. [Install Chocolatey](https://chocolatey.org/install)
2. Open `cmd.exe` as **Administrator**
3. Run the following `choco` commands:
   ```shell
   choco install cmake --installargs 'ADD_CMAKE_TO_PATH=System'
   choco install ninja gperf python git
   ```

</TabItem>
<TabItem value="mac">

#### Homebrew

Homebrew is required to install the system dependencies. If you haven't done so, visit [Homebrew](https://brew.sh/) for instructions. Once installed, use it to install the base dependencies:

```
brew install cmake ninja python3 ccache dtc git wget
```

</TabItem>
</OsTabs>

## Setup

### West Build Command

`west` is the [Zephyr™ meta-tool](https://docs.zephyrproject.org/2.3.0/guides/west/index.html) used to configure and build Zephyr™ applications.

West can be installed by using the `pip` python package manager.

```sh
pip3 install --user -U west
```

:::danger pip user packages
If you haven't done so yet, you may need to add the Python Pip user package directory to your `PATH`, e.g.:

```
echo 'export PATH=~/.local/bin:"$PATH"' >> ~/.bashrc
source ~/.bashrc
```

:::

### Toolchain Installation

The toolchain provides the compiler, linker, etc., necessary to build for the target
platform.

<OsTabs>
<TabItem value="debian">

#### Zephyr™ ARM SDK

To build firmwares for the ARM architecture (all supported MCUs/keyboards at this point), you'll need to install the Zephyr™ ARM SDK to your system:

```
export ZSDK_VERSION=0.11.2
wget -q "https://github.com/zephyrproject-rtos/sdk-ng/releases/download/v${ZSDK_VERSION}/zephyr-toolchain-arm-${ZSDK_VERSION}-setup.run" && \
	sh "zephyr-toolchain-arm-${ZSDK_VERSION}-setup.run" --quiet -- -d ~/.local/zephyr-sdk-${ZSDK_VERSION} && \
	rm "zephyr-toolchain-arm-${ZSDK_VERSION}-setup.run"
```

The installation will prompt with several questions about installation location, and creating a default `~/.zephyrrc` for you with various variables. The defaults should normally work as expected.

</TabItem>
<TabItem value="raspberryos">

Because Raspberry OS (Raspbian) runs on the same architecture (but different ABI) as the keyboard MCUs,
the operating system's installed [cross compilers](https://docs.zephyrproject.org/2.3.0/getting_started/toolchain_other_x_compilers.html) can be used to target the different ABI.

First, the cross compiler should be installed:

```sh
sudo apt install gcc-arm-none-eabi
```

Next, we'll configure Zephyr™ with some extra environment variables needed to find the cross compiler by adding the following to `~/.zephyrrc`:

```sh
export ZEPHYR_TOOLCHAIN_VARIANT=cross-compile
export CROSS_COMPILE=/usr/bin/arm-none-eabi-
```

</TabItem>
<TabItem value="fedora">

#### Zephyr™ ARM SDK

To build firmwares for the ARM architecture (all supported MCUs/keyboards at this point), you'll need to install the Zephyr™ ARM SDK to your system:

```
export ZSDK_VERSION=0.11.2
wget -q "https://github.com/zephyrproject-rtos/sdk-ng/releases/download/v${ZSDK_VERSION}/zephyr-toolchain-arm-${ZSDK_VERSION}-setup.run" && \
 sh "zephyr-toolchain-arm-${ZSDK_VERSION}-setup.run" --quiet -- -d ~/.local/zephyr-sdk-${ZSDK_VERSION} && \
 rm "zephyr-toolchain-arm-\${ZSDK_VERSION}-setup.run"
```

The installation will prompt with several questions about installation location, and creating a default `~/.zephyrrc` for you with various variables. The defaults should normally work as expected.

</TabItem>
<TabItem value="win">

#### GNU ARM Embedded

Since the Zephyr™ SDK is not available for Windows, we recommending following the steps to install the [GNU ARM Embedded](https://docs.zephyrproject.org/2.3.0/getting_started/toolchain_3rd_party_x_compilers.html#gnu-arm-embedded).

</TabItem>
<TabItem value="mac">

#### GNU ARM Embedded

Since the Zephyr™ SDK is not available for macOS, we recommending following the steps to install the [GNU ARM Embedded](https://docs.zephyrproject.org/2.3.0/getting_started/toolchain_3rd_party_x_compilers.html#gnu-arm-embedded).

:::warning Security Controls Workaround

Please be sure to read the [additional setup instructions](https://docs.zephyrproject.org/2.3.0/getting_started/installation_mac.html#mac-gatekeeper) needed to address security controls found in macOS 10.15 Catalina and newer

:::

</TabItem>
</OsTabs>

:::note
If you intend to build firmware straight away, make sure to correctly setup the current shell.

Notes on setting this up can be found in the [Environment Variables](#environment-variables) section.
The transient instructions can be used to setup the current shell, and the automatic instructions can setup any newly made shells automatically.

The transient instructions must be run to build firmware using the current shell.
:::

### Source Code

Next, you'll need to clone the ZMK source repository if you haven't already:

```
git clone https://github.com/zmkfirmware/zmk.git
```

### Initialize & Update Zephyr Workspace

Since ZMK is built as a Zephyr™ application, the next step is
to use `west` to initialize and update your workspace. The ZMK
Zephyr™ application is in the `app/` source directory:

#### Step into the repository

```sh
cd zmk
```

#### Initialize West

```sh
west init -l app/
```

:::caution Command Not Found?
If you encounter errors like `command not found: west` then your `PATH` environment variable is likely
missing the Python 3 user packages directory. See the [West Build Command](#west-build-command)
section again for links to how to do this
:::

#### Update To Fetch Modules

```sh
west update
```

#### Export Zephyr™ Core

```sh
west zephyr-export
```

#### Install Zephyr Python Dependencies

```sh
pip3 install --user -r zephyr/scripts/requirements-base.txt
```

### Environment Variables

By default, the Zephyr™ SDK will create a file named `~/.zephyrrc` with the correct environment variables to build ZMK.
We suggest two main [options](https://docs.zephyrproject.org/2.3.0/guides/env_vars.html?highlight=zephyrrc) for how to load those settings.

#### Per Shell

To load the Zephyr environment properly for just one transient shell, run the following from your ZMK checkout directory:

<OsTabs>
<TabItem value="debian">

```
source zephyr/zephyr-env.sh
```

</TabItem>

<TabItem value="raspberryos">

```
source zephyr/zephyr-env.sh
```

</TabItem>

<TabItem value="fedora">

```
source zephyr/zephyr-env.sh
```

</TabItem>

<TabItem value="mac">

```
source zephyr/zephyr-env.sh
```

</TabItem>

<TabItem value="win">

```
source zephyr/zephyr-env.cmd
```

</TabItem>
</OsTabs>

#### All Shells

To load the environment variables for your shell every time,
append the existing `~/.zephyrrc` file to your shell's RC file and then start a new shell.

<Tabs
groupId="shell"
defaultValue="bash"
values={[
{label: 'bash', value: 'bash'},
{label: 'zsh', value: 'zsh'},
{label: 'cmd.exe', value: 'cmd'},
]
}>

<TabItem value="bash">

```
cat ~/.zephyrrc >> ~/.bashrc
```

</TabItem>

<TabItem value="zsh">

```
cat ~/.zephyrrc >> ~/.zshrc
```

</TabItem>

<TabItem value="cmd">

`cmd.exe` instructions coming soon!

</TabItem>

</Tabs>

## Build

From here on, building and flashing ZMK should all be done from the `app/` subdirectory of the ZMK checkout:

```sh
cd app
```

To build for your particular keyboard, the behaviour varies slightly depending on if you are building for a keyboard with
an onboard MCU, or one that uses a MCU board addon.

### Keyboard (Shield) + MCU Board

ZMK treats keyboards that take a MCU addon board as [shields](https://docs.zephyrproject.org/2.3.0/guides/porting/shields.html), and treats the smaller MCU board as the true [board](https://docs.zephyrproject.org/2.3.0/guides/porting/board_porting.html)

Given the following:

- MCU Board: Proton-C
- Keyboard PCB: kyria_left
- Keymap: default

You can build ZMK with the following:

```sh
west build -b proton_c -- -DSHIELD=kyria_left -DKEYMAP=default
```

### Keyboard With Onboard MCU

Keyboards with onboard MCU chips are simply treated as the [board](https://docs.zephyrproject.org/2.3.0/guides/porting/board_porting.html) as far as Zephyr™ is concerned.

Given the following:

- Keyboard: Planck (rev6)
- Keymap: default

you can build ZMK with the following:

```sh
west build -b planck_rev6 -- -DKEYMAP=default
```

## Flashing

Once built, the previously supplied parameters will be remember, so you can simply run the following to flash your
board, with it in bootloader mode:

```
west flash
```
