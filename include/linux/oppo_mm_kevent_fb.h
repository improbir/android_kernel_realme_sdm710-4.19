/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for oppo_mm_kevent_fb.h - Oplus MM kevent not in 4.19 */

#ifndef __LINUX_OPPO_MM_KEVENT_FB_H__
#define __LINUX_OPPO_MM_KEVENT_FB_H__

/* Dummy declarations */
#define OPPO_MM_KEVENT_FB_MAX_LEN 256

static inline int oppo_mm_kevent_fb(const char *tag, const char *fmt, ...)
{
	return 0;
}

#endif /* __LINUX_OPPO_MM_KEVENT_FB_H__ */