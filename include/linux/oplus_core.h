/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Oplus core compatibility stubs header
 */

#ifndef __LINUX_OPLUS_CORE_H
#define __LINUX_OPLUS_CORE_H

#include <linux/types.h>
#include <linux/suspend.h>
#include <linux/soc/qcom/qmi.h>

/* Wakeup reason */
void log_abnormal_wakeup_reason(const char *fmt, ...);

/* Power management */
extern int modem_wakeup_src_count;
extern const char *modem_wakeup_src_string;

/* SLST GPIO */
extern int slst_gpio_base_id;

/* Wakeup source counts */
extern int alarm_count;
extern int wakeup_source_count_rtc;
extern int wakeup_source_count_wifi;
extern int wakeup_source_count_modem;
extern int wakeup_source_count_pmic_rtc;
extern int wakeup_source_count_kpdpwr;
extern int wakeup_source_count_cdsp;
extern int wakeup_source_count_adsp;

/* PID hash init */
void pidhash_init(void);

/* Check bugs */
void check_bugs(void);

/* rodata_enabled */
extern bool rodata_enabled;

/* s2idle state */
extern enum s2idle_states s2idle_state;

/* mem_sleep */
extern const char *mem_sleep_states[];
extern int mem_sleep_current;

/* ext4 fsync */
extern int sysctl_ext4_fsync_enable;
extern int ext4_fsync_enable_status;

/* Chipset version */
int get_chipset_version(void);

/* Bluetooth SLIM */
int bt_register_slimdev(void *dev);

/* s2idle operations */
void s2idle_set_ops(const struct platform_s2idle_ops *ops);
void s2idle_wake(void);


/* Missing pm_suspend_target_state */
extern int pm_suspend_target_state;

/* Missing panic_flush_device_cache */
void panic_flush_device_cache(void);

/* QCOM ICE crypto */
int qcom_ice_config_start(void *ctx);

/* OEM UART log */
bool oem_get_uartlog_status(void);

/* QSEECOM functions */
struct qseecom_send_cmd_req;
int qseecom_send_command(void *dev, struct qseecom_send_cmd_req *req);
int qseecom_start_app(void *dev, const char *app_name);
int qseecom_shutdown_app(void *dev);
int qseecom_process_listener_from_smcinvoke(void *dev, void *listener);

/* RPM stats */
void rpm_master_stats_print(void);

/* log_irq_wakeup_reason */
void log_irq_wakeup_reason(int irq);

#endif /* __LINUX_OPLUS_CORE_H */