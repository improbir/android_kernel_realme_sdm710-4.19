/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for qpnp/pin.h - QPNP pin control not in 4.19 */

#ifndef __LINUX_QPNP_PIN_H__
#define __LINUX_QPNP_PIN_H__

#include <linux/errno.h>

/* Dummy declarations for QPNP pin control */
struct qpnp_pin_config {
	const char *name;
	unsigned int direction;
	unsigned int output_value;
	unsigned int function;
	unsigned int bias;
	unsigned int strength;
};

static inline int qpnp_pin_config_get(struct device *dev, const char *name, struct qpnp_pin_config *config)
{
	return -ENOSYS;
}

static inline int qpnp_pin_config_set(struct device *dev, const char *name, const struct qpnp_pin_config *config)
{
	return -ENOSYS;
}

static inline int qpnp_gpio_request(struct device *dev, unsigned int gpio, const char *label)
{
	return -ENOSYS;
}

static inline void qpnp_gpio_free(struct device *dev, unsigned int gpio)
{
}

#endif /* __LINUX_QPNP_PIN_H__ */