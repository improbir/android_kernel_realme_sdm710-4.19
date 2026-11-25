/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for qpnp/pwm.h - QPNP PWM not in 4.19 */

#ifndef __LINUX_QPNP_PWM_H__
#define __LINUX_QPNP_PWM_H__

#include <linux/errno.h>

/* Dummy declarations for QPNP PWM */
struct qpnp_pwm_config {
	unsigned int channel;
	unsigned int period_ns;
	unsigned int duty_ns;
	unsigned int polarity;
};

static inline int qpnp_pwm_config(struct device *dev, const struct qpnp_pwm_config *config)
{
	return -ENOSYS;
}

static inline int qpnp_pwm_enable(struct device *dev, unsigned int channel, bool enable)
{
	return -ENOSYS;
}

#endif /* __LINUX_QPNP_PWM_H__ */