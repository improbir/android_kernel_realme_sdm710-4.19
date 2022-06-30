/*
 * Copyright (c) 2012-2016, The Linux Foundation. All rights reserved.
 * Copyright (C) 2017 Linaro Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __VENUS_HFI_VENUS_H__
#define __VENUS_HFI_VENUS_H__

<<<<<<< HEAD:drivers/media/platform/qcom/venus/hfi_venus.h
struct venus_core;

void venus_hfi_destroy(struct venus_core *core);
int venus_hfi_create(struct venus_core *core);

#endif
=======
&int_codec {
	/* #ifdef OPLUS_ARCH_EXTENDS */
	/*
	qcom,msm-mbhc-usbc-audio-supported = <1>;
	qcom,usbc-analog-en1-gpio = <&wcd_usbc_analog_en1_gpio>;
	qcom,usbc-analog-en2-gpio = <&tlmm 40 0>;
	pinctrl-names = "aud_active", "aud_sleep";
	pinctrl-0 = <&wcd_usbc_analog_en2_active>;
	pinctrl-1 = <&wcd_usbc_analog_en2_idle>;
	*/
	/* #endif OPLUS_ARCH_EXTENDS */
};
>>>>>>> f1492b3700cb (19691 device tree as dts/qcom):arch/arm64/boot/dts/qcom/sdm670-int-cdc-usbc-audio-overlay.dtsi
