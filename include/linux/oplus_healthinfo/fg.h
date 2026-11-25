/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for oplus_healthinfo/fg.h - Oplus healthinfo not fully ported to 4.19 */

#ifndef __LINUX_OPPO_HEALTHINFO_FG_H__
#define __LINUX_OPPO_HEALTHINFO_FG_H__

#include <linux/sched.h>

/* Dummy declarations */
#define OPLUS_HEALTHINFO_FG_MAX 32

struct ohm_fg_data {
    int dummy;
};

static inline int ohm_fg_init(void)
{
    return 0;
}

static inline void ohm_fg_exit(void)
{
}

static inline int ohm_fg_register_notifier(void *nb)
{
    return 0;
}

static inline int ohm_fg_unregister_notifier(void *nb)
{
    return 0;
}

/* task_is_fg - check if task is in foreground (Oplus specific) */
/* In standard kernel, there's no foreground concept, so we return false */
static inline bool task_is_fg(struct task_struct *task)
{
    return false;
}

#endif /* __LINUX_OPPO_HEALTHINFO_FG_H__ */