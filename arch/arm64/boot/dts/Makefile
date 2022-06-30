<<<<<<< HEAD
# SPDX-License-Identifier: GPL-2.0
dtstree		:= $(srctree)/$(src)

vendor := $(dtstree)/vendor
ifeq "$(wildcard $(vendor)/Makefile)" ""
subdir-y += actions
subdir-y += al
subdir-y += allwinner
subdir-y += altera
subdir-y += amd
subdir-y += amlogic
subdir-y += apm
subdir-y += arm
subdir-y += broadcom
subdir-y += cavium
subdir-y += exynos
subdir-y += freescale
subdir-y += hisilicon
subdir-y += lg
subdir-y += marvell
subdir-y += mediatek
subdir-y += nvidia
subdir-y += qcom
subdir-y += realtek
subdir-y += renesas
subdir-y += rockchip
subdir-y += socionext
subdir-y += sprd
subdir-y += synaptics
subdir-y += ti
subdir-y += xilinx
subdir-y += zte


else
=======
#ifndef VENDOR_EDIT
#PengNan@BSP.CHG.Basic 2019/03/15 modify for 18097
#dts-dirs += al
#dts-dirs += altera
#dts-dirs += amd
#dts-dirs += amlogic
#dts-dirs += apm
#dts-dirs += arm
#dts-dirs += broadcom
#dts-dirs += cavium
#dts-dirs += exynos
#dts-dirs += freescale
#dts-dirs += hisilicon
#dts-dirs += marvell
#dts-dirs += mediatek
#dts-dirs += nvidia
#dts-dirs += renesas
#dts-dirs += rockchip
#dts-dirs += socionext
#dts-dirs += sprd
#dts-dirs += xilinx
#dts-dirs += lg
#dts-dirs += zte
#else
>>>>>>> f1492b3700cb (19691 device tree as dts/qcom)

dts-dirs += 18097

ifeq ($(CONFIG_BRAND_SHOW_FLAG), realme)
dts-dirs += 19601
else
dts-dirs += 18041
endif

dts-dirs += 19651
dts-dirs += 18621
dts-dirs += qcom
<<<<<<< HEAD
endif
=======
>>>>>>> f1492b3700cb (19691 device tree as dts/qcom)

dtb-$(CONFIG_OF_ALL_DTBS) := $(patsubst $(dtstree)/%.dts,%.dtb, $(foreach d,$(subdir), $(wildcard $(dtstree)/$(d)/*.dts)))

always		:= $(dtb-y)

targets += dtbs

DTB_NAMES := $(subst $\",,$(CONFIG_BUILD_ARM64_APPENDED_DTB_IMAGE_NAMES))
ifneq ($(DTB_NAMES),)
DTB_LIST := $(addsuffix .dtb,$(DTB_NAMES))
else
DTB_LIST := $(dtb-y)
endif
targets += $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))

clean-files := dts/*.dtb *.dtb
