/* SPDX-License-Identifier: GPL-2.0 */
/* Stub for linux/imq.h - IMQ not in standard 4.19 kernel */

#ifndef __LINUX_IMQ_H__
#define __LINUX_IMQ_H__

/* IMQ device constants */
#define IMQ_MAX_DEVS      16
#define IMQ_MAX_QUEUES    32

/* IMQ flags */
#define IMQ_F_IFMASK      0x0F
#define IMQ_F_ENQUEUE     0x10

/* Netfilter verdict for IMQ */
#define NF_IMQ_QUEUE      5

#endif /* __LINUX_IMQ_H__ */