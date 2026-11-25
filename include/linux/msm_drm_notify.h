/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for msm_drm_notify.h - Oplus/QCOM specific header not in 4.19 */

#ifndef __MSM_DRM_NOTIFY_H__
#define __MSM_DRM_NOTIFY_H__

#include <linux/notifier.h>

/* MSM DRM Blank events */
#define MSM_DRM_BLANK_UNBLANK       1
#define MSM_DRM_BLANK_POWERDOWN     0

/* MSM DRM Event types */
#define MSM_DRM_EARLY_EVENT_BLANK   0x1000
#define MSM_DRM_EVENT_BLANK         0x1001

struct msm_drm_notifier {
	struct notifier_block nb;
	int (*callback)(struct notifier_block *self, unsigned long event, void *data);
	void *data;
	int id;
};

/* Use a dummy notifier head for the stub */
static ATOMIC_NOTIFIER_HEAD(msm_drm_notifier_list);

static inline int msm_drm_register_client(struct notifier_block *nb)
{
	return atomic_notifier_chain_register(&msm_drm_notifier_list, nb);
}

static inline int msm_drm_unregister_client(struct notifier_block *nb)
{
	return atomic_notifier_chain_unregister(&msm_drm_notifier_list, nb);
}

extern int msm_drm_notifier_call_chain(unsigned long val, void *v);

#endif /* __MSM_DRM_NOTIFY_H__ */