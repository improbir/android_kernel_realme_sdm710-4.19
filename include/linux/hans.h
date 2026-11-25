/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for hans.h - Oplus HANS freeze feature not in 4.19 */

#ifndef __LINUX_HANS_H__
#define __LINUX_HANS_H__

#ifdef CONFIG_OPLUS_FEATURE_HANS

/* Dummy declarations for HANS freeze feature */
static inline int hans_freeze_init(void) { return 0; }
static inline void hans_freeze_exit(void) { }
static inline int hans_freeze_notify(unsigned long event) { return 0; }
static inline void hans_check_signal(struct task_struct *p, int sig) { }

#endif /* CONFIG_OPLUS_FEATURE_HANS */

#endif /* __LINUX_HANS_H__ */