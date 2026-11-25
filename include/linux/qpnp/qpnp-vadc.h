/* SPDX-License-Identifier: GPL-2.0 */
/*
 * QPNP VADC compatibility stub for 4.19
 * The original QPNP VADC API was replaced by IIO subsystem
 */

#ifndef __QPNP_VADC_H
#define __QPNP_VADC_H

#include <linux/types.h>
#include <linux/err.h>

struct qpnp_vadc_chip;

struct qpnp_vadc_result {
    int physical;
    int ratiometric;
    int adc_code;
};

/* QPNP VADC channel definitions (from qpnp-adc.h) */
enum qpnp_vadc_channels {
    USBIN = 0,
    DCIN,
    VCHG_SNS,
    SPARE1_03,
    USB_ID_MV,
    VCOIN,
    VBAT_SNS,
    VSYS,
    DIE_TEMP,
    REF_625MV,
    REF_125V,
    CHG_TEMP,
    SPARE1,
    SPARE2,
    GND_REF,
    VDD_VADC,
    P_MUX1_1_1,
    P_MUX2_1_1,
    P_MUX3_1_1,
    P_MUX4_1_1,
    P_MUX5_1_1,
    P_MUX6_1_1,
    P_MUX7_1_1,
    P_MUX8_1_1,
    P_MUX9_1_1,
    P_MUX10_1_1,
    P_MUX11_1_1,
    P_MUX12_1_1,
    P_MUX13_1_1,
    P_MUX14_1_1,
    P_MUX15_1_1,
    P_MUX16_1_1,
    P_MUX1_1_3,
    P_MUX2_1_3,
    P_MUX3_1_3,
    P_MUX4_1_3,
    P_MUX5_1_3,
    P_MUX6_1_3,
    P_MUX7_1_3,
    P_MUX8_1_3,
    P_MUX9_1_3,
    P_MUX10_1_3,
    P_MUX11_1_3,
    P_MUX12_1_3,
    P_MUX13_1_3,
    P_MUX14_1_3,
    P_MUX15_1_3,
    P_MUX16_1_3,
};

/**
 * qpnp_get_vadc() - Get VADC device for a given name
 * @dev: Device pointer
 * @name: Name of the VADC channel
 *
 * Returns: VADC chip pointer or ERR_PTR on failure
 *
 * Note: This is a stub. The QPNP VADC API has been replaced by IIO.
 * This stub always returns -ENODEV to gracefully disable the feature.
 */
static inline struct qpnp_vadc_chip *qpnp_get_vadc(struct device *dev, const char *name)
{
    return ERR_PTR(-ENODEV);
}

/**
 * qpnp_vadc_read() - Read VADC channel
 * @vadc: VADC chip pointer
 * @channel: Channel to read
 * @result: Result structure
 *
 * Returns: 0 on success, negative error code on failure
 *
 * Note: This is a stub. The QPNP VADC API has been replaced by IIO.
 * This stub always returns -ENODEV to gracefully disable the feature.
 */
static inline int qpnp_vadc_read(struct qpnp_vadc_chip *vadc,
                                 unsigned int channel,
                                 struct qpnp_vadc_result *result)
{
    return -ENODEV;
}

#endif /* __QPNP_VADC_H */