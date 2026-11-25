/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Oplus core compatibility stubs for 4.19
 * Provides implementations for symbols referenced by Oplus features
 * but not present in the base 4.19 kernel.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/suspend.h>
#include <linux/wakeup_reason.h>
#include <linux/irq.h>
#include <linux/gpio.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/soc/qcom/qmi.h>
#include <linux/notifier.h>

/* wakeup_reason.h symbols */
void log_abnormal_wakeup_reason(const char *fmt, ...)
{
    /* Stub - no-op */
}
EXPORT_SYMBOL(log_abnormal_wakeup_reason);

/* Power management symbols referenced by Oplus features */
int modem_wakeup_src_count = 0;
EXPORT_SYMBOL(modem_wakeup_src_count);

const char *modem_wakeup_src_string = "unknown";
EXPORT_SYMBOL(modem_wakeup_src_string);

/* SLST GPIO for suspend */
int slst_gpio_base_id = -1;
EXPORT_SYMBOL(slst_gpio_base_id);

/* Wakeup source count symbols - aligned to fix relocation truncated errors */
#define WAKEUP_SRC_ALIGN __attribute__((aligned(8)))

int alarm_count WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(alarm_count);

int wakeup_source_count_rtc WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_rtc);

int wakeup_source_count_wifi WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_wifi);

int wakeup_source_count_modem WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_modem);

int wakeup_source_count_pmic_rtc WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_pmic_rtc);

int wakeup_source_count_kpdpwr WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_kpdpwr);

int wakeup_source_count_cdsp WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_cdsp);

int wakeup_source_count_adsp WAKEUP_SRC_ALIGN = 0;
EXPORT_SYMBOL(wakeup_source_count_adsp);

/* PID hash init - should be in kernel but missing */
void pidhash_init(void)
{
    /* Already initialized by base kernel */
}
EXPORT_SYMBOL(pidhash_init);

/* check_bugs - architecture specific */
void check_bugs(void)
{
    /* No-op for arm64 */
}
EXPORT_SYMBOL(check_bugs);

/* rodata_enabled - defined in init/main.c only when CONFIG_DEBUG_RODATA is set */
/* Oplus mmu.c references it unconditionally, provide fallback */
bool rodata_enabled = true;
EXPORT_SYMBOL(rodata_enabled);

/* s2idle_state - used by idle.c, provide fallback */
enum s2idle_states s2idle_state = S2IDLE_STATE_NONE;
EXPORT_SYMBOL(s2idle_state);

/* mem_sleep_current and mem_sleep_states - used by power/main.c */
/* In base kernel, these are defined with #define mem_sleep_current PM_SUSPEND_ON */
/* but Oplus code expects actual variables. Provide fallbacks. */
const char *mem_sleep_states[] = {
    [PM_SUSPEND_ON] = "s2idle",
    [PM_SUSPEND_STANDBY] = "standby",
    [PM_SUSPEND_MEM] = "mem",
};
int mem_sleep_current = PM_SUSPEND_ON;
EXPORT_SYMBOL(mem_sleep_states);
EXPORT_SYMBOL(mem_sleep_current);

/* ext4 fsync symbols (Oplus feature) */
int sysctl_ext4_fsync_enable = 1;
EXPORT_SYMBOL(sysctl_ext4_fsync_enable);

int ext4_fsync_enable_status = 1;
EXPORT_SYMBOL(ext4_fsync_enable_status);

/* Chipset version detection */
int get_chipset_version(void)
{
    return 0;  /* Unknown chipset */
}
EXPORT_SYMBOL(get_chipset_version);

/* Bluetooth SLIM */
int bt_register_slimdev(void *dev)
{
    return -ENODEV;
}
EXPORT_SYMBOL(bt_register_slimdev);

/* s2idle operations */
void s2idle_set_ops(const struct platform_s2idle_ops *ops)
{
}
EXPORT_SYMBOL(s2idle_set_ops);

/* QCOM ICE crypto */
int qcom_ice_config_start(void *ctx)
{
    return 0;
}
EXPORT_SYMBOL(qcom_ice_config_start);

/* OEM UART log status */
bool oem_get_uartlog_status(void)
{
    return false;
}
EXPORT_SYMBOL(oem_get_uartlog_status);

/* Missing s2idle wake function */
void s2idle_wake(void)
{
    /* Stub */
}
EXPORT_SYMBOL(s2idle_wake);

/* Missing pm_suspend_target_state */
int pm_suspend_target_state;
EXPORT_SYMBOL(pm_suspend_target_state);

/* Missing panic_flush_device_cache */
void panic_flush_device_cache(void)
{
    /* Stub */
}
EXPORT_SYMBOL(panic_flush_device_cache);

/* RPM stats symbols (referenced by suspend.c) */
void rpm_master_stats_print(void)
{
    /* Stub */
}
EXPORT_SYMBOL(rpm_master_stats_print);

/* log_irq_wakeup_reason implementation (base kernel may not have it) */
void log_irq_wakeup_reason(int irq)
{
    /* Stub - base kernel wakeup_reason.h declares it but may not implement */
}
EXPORT_SYMBOL(log_irq_wakeup_reason);

/* qseecom struct definition */
struct qseecom_send_cmd_req {
    uint32_t cmd_id;
    void *cmd_req_buf;
    uint32_t cmd_req_len;
    void *resp_buf;
    uint32_t resp_len;
};

/* Missing qseecom functions */
int qseecom_send_command(void *dev, struct qseecom_send_cmd_req *req)
{
    return -ENODEV;
}
EXPORT_SYMBOL(qseecom_send_command);

int qseecom_start_app(void *dev, const char *app_name)
{
    return -ENODEV;
}
EXPORT_SYMBOL(qseecom_start_app);

int qseecom_shutdown_app(void *dev)
{
    return -ENODEV;
}
EXPORT_SYMBOL(qseecom_shutdown_app);

int qseecom_process_listener_from_smcinvoke(void *dev, void *listener)
{
    return -ENODEV;
}
EXPORT_SYMBOL(qseecom_process_listener_from_smcinvoke);

/* MSM DRM notifier call chain - stub implementation */
int msm_drm_notifier_call_chain(unsigned long val, void *v)
{
	/* Stub - no actual notifier chain */
	return 0;
}
EXPORT_SYMBOL(msm_drm_notifier_call_chain);

/* Audio notifier stubs - for when CONFIG_MSM_QDSP6_NOTIFIER is enabled but implementation missing */
int audio_notifier_register(char *client_name, int domain, struct notifier_block *nb)
{
	return 0;
}
EXPORT_SYMBOL(audio_notifier_register);

int audio_notifier_deregister(char *client_name)
{
	return 0;
}
EXPORT_SYMBOL(audio_notifier_deregister);

/* Oplus display brightness alpha variables - referenced by oppo_display_private_api.c */
int oppo_underbrightness_alpha = 0;
EXPORT_SYMBOL(oppo_underbrightness_alpha);

int oppo_dc2_alpha = 0;
EXPORT_SYMBOL(oppo_dc2_alpha);

/* Oplus display dimming variables - referenced by oppo_display_private_api.c */
int oppo_last_backlight = 0;
EXPORT_SYMBOL(oppo_last_backlight);

int oppo_seed_backlight = 0;
EXPORT_SYMBOL(oppo_seed_backlight);

int oppo_dimlayer_bl_enable_v2_real = 0;
EXPORT_SYMBOL(oppo_dimlayer_bl_enable_v2_real);

bool oppo_skip_datadimming_sync = false;
EXPORT_SYMBOL(oppo_skip_datadimming_sync);

/* oppo_ffl_trigger_finish is defined in oppo_display_private_api.c */

MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Oplus core compatibility stubs");