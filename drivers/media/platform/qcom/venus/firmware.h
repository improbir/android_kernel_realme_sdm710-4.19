/*
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
#ifndef __VENUS_FIRMWARE_H__
#define __VENUS_FIRMWARE_H__

struct device;

int venus_boot(struct device *dev, const char *fwname);
int venus_shutdown(struct device *dev);

<<<<<<< HEAD:drivers/media/platform/qcom/venus/firmware.h
#endif
=======
/ {
	model = "Qualcomm Technologies, Inc. SDM710 SoC";
	compatible = "qcom,sdm670";
	qcom,board-id = <0 0>;
	/*oppo,prjversion. first one is the count of projects*/
	oppo,prjversion = <1 19691>;
};
>>>>>>> f1492b3700cb (19691 device tree as dts/qcom):arch/arm64/boot/dts/qcom/sdm710.dts
