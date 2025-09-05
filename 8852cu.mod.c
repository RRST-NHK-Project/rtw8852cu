#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe199f25f, "jiffies_to_msecs" },
	{ 0x5218fe90, "single_open" },
	{ 0xc051cdfe, "regulatory_set_wiphy_regd_sync" },
	{ 0x5a844b26, "__x86_indirect_thunk_r10" },
	{ 0xbd03ed67, "vmemmap_base" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x392cf09f, "eth_type_trans" },
	{ 0x5a77d5c5, "ethtool_op_get_link" },
	{ 0x80e9d089, "cfg80211_ready_on_channel" },
	{ 0xf64ac983, "__copy_overflow" },
	{ 0xd272d446, "yield" },
	{ 0x1407cc98, "cfg80211_mgmt_tx_status_ext" },
	{ 0x457edffd, "skb_pull" },
	{ 0xd6d11a41, "nla_put" },
	{ 0x357aaab3, "mutex_lock_interruptible" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xa39aa24c, "device_wakeup_enable" },
	{ 0x7bf8cb05, "cfg80211_connect_done" },
	{ 0x8284a69e, "proc_mkdir_data" },
	{ 0xfd285498, "unregister_netdevice_notifier" },
	{ 0x0e0926b0, "kthread_complete_and_exit" },
	{ 0x2ff9b4e7, "napi_complete_done" },
	{ 0xfd285498, "register_netdevice_notifier" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0xd272d446, "synchronize_net" },
	{ 0xbd03ed67, "page_offset_base" },
	{ 0xac44672f, "kern_path" },
	{ 0x14db0d32, "nla_put_nohdr" },
	{ 0x5a844b26, "__x86_indirect_thunk_r15" },
	{ 0x1d05bb1d, "netif_receive_skb" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x705b6972, "netdev_set_default_ethtool_ops" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x4ac4312d, "kmalloc_caches" },
	{ 0x07606888, "wiphy_new_nm" },
	{ 0xfd285498, "unregister_inetaddr_notifier" },
	{ 0x60c9c0b3, "__init_swait_queue_head" },
	{ 0xa113294b, "usb_autopm_get_interface" },
	{ 0xff396a89, "skb_trim" },
	{ 0xd22cd56f, "seq_read" },
	{ 0xc01aafd2, "get_random_u32" },
	{ 0x2435d559, "strncmp" },
	{ 0xfefac423, "remove_proc_entry" },
	{ 0xfd285498, "unregister_inet6addr_notifier" },
	{ 0x457edffd, "skb_push" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xc74f7b60, "free_netdev" },
	{ 0x158bf240, "__pskb_pull_tail" },
	{ 0x2352b148, "timer_delete" },
	{ 0x7851be11, "rtnl_is_locked" },
	{ 0xc1e6c71e, "__mutex_init" },
	{ 0x43a349ca, "strlen" },
	{ 0xd272d446, "rtnl_lock" },
	{ 0x5cae6bc0, "register_netdevice" },
	{ 0x5adfd8b1, "napi_schedule_prep" },
	{ 0x29ced071, "__netdev_alloc_skb" },
	{ 0xcfe3d719, "cfg80211_roamed" },
	{ 0xc5ceac9d, "usb_free_urb" },
	{ 0xef2ae37d, "cfg80211_vendor_cmd_reply" },
	{ 0x40a621c5, "snprintf" },
	{ 0x62798cf5, "usb_get_dev" },
	{ 0xba5370f7, "wiphy_register" },
	{ 0x8d1d7639, "__kmalloc_cache_noprof" },
	{ 0x96c07e76, "const_pcpu_hot" },
	{ 0xae030cd0, "single_release" },
	{ 0x9d212913, "iwe_stream_add_point" },
	{ 0x058c185a, "jiffies" },
	{ 0x4549c894, "device_set_wakeup_capable" },
	{ 0x056c43c7, "usb_deregister" },
	{ 0xdce5d618, "cfg80211_disconnected" },
	{ 0xf4d25b68, "proc_create_data" },
	{ 0x5629a063, "strncasecmp" },
	{ 0x2309c056, "netif_carrier_off" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x57860fb4, "wait_for_completion_timeout" },
	{ 0x388dee05, "seq_lseek" },
	{ 0x457edffd, "skb_put" },
	{ 0x4d271a65, "init_net" },
	{ 0x5a644742, "usb_autopm_put_interface" },
	{ 0x0a711811, "__napi_schedule" },
	{ 0x56adb917, "cfg80211_new_sta" },
	{ 0xc69a835f, "find_vpid" },
	{ 0xa53f4e29, "memmove" },
	{ 0xa5c7582d, "strsep" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x224a53e7, "get_random_bytes" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xde338d9a, "_raw_spin_unlock_bh" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xd272d446, "dump_stack" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0x65026e43, "complete" },
	{ 0x77fd1475, "seq_open" },
	{ 0xedb811f7, "single_open_size" },
	{ 0x593bc32a, "ieee80211_get_channel_khz" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "rtnl_unlock" },
	{ 0xe8213e80, "_printk" },
	{ 0xc74f7b60, "netif_tx_stop_all_queues" },
	{ 0x58906f42, "kernel_write" },
	{ 0xd99598f0, "cfg80211_unlink_bss" },
	{ 0x04f14161, "cfg80211_external_auth_request" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0x0a711811, "napi_disable" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x2a11fff9, "__cfg80211_alloc_event_skb" },
	{ 0xf1de9e85, "vfree" },
	{ 0x73bebd3f, "param_array_ops" },
	{ 0xd710adbf, "__kmalloc_large_noprof" },
	{ 0x005b7b07, "usb_control_msg" },
	{ 0xb2fa43dd, "kernel_sigaction" },
	{ 0x5a844b26, "__x86_indirect_thunk_r12" },
	{ 0x73bebd3f, "param_ops_int" },
	{ 0xe97c47f7, "up" },
	{ 0xcdec1689, "tasklet_init" },
	{ 0x28a786c6, "netif_napi_add_weight_locked" },
	{ 0x8db9b6ac, "__usecs_to_jiffies" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x2309c056, "netif_carrier_on" },
	{ 0x173ec8da, "sscanf" },
	{ 0xc1bbd667, "dev_addr_mod" },
	{ 0xa96d32ba, "__udelay" },
	{ 0x5a844b26, "__x86_indirect_thunk_rbx" },
	{ 0xc609ff70, "strncpy" },
	{ 0x20d14f53, "__netif_napi_del_locked" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xd0a6e881, "dev_kfree_skb_any_reason" },
	{ 0xc5ceac9d, "usb_kill_urb" },
	{ 0x20fe0e51, "csum_partial" },
	{ 0x16129640, "skb_copy" },
	{ 0x03558e94, "dev_alloc_name" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x951536d8, "dev_get_by_name" },
	{ 0x5a844b26, "__x86_indirect_thunk_r8" },
	{ 0xd272d446, "schedule" },
	{ 0x1d05bb1d, "netif_rx" },
	{ 0x0001e22b, "down_interruptible" },
	{ 0xfd285498, "register_inet6addr_notifier" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x5d3be6f8, "pcpu_hot" },
	{ 0x27683a56, "memset" },
	{ 0x784f1f63, "kfree_skb_list_reason" },
	{ 0x97eb8d40, "skb_copy_bits" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xc8f3567c, "kthread_create_on_node" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x7e00c71b, "skb_clone" },
	{ 0x7295b8c3, "ieee80211_freq_khz_to_channel" },
	{ 0xad77dc47, "cfg80211_ch_switch_notify" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0x0a711811, "napi_enable" },
	{ 0xc0761c9a, "kill_pid" },
	{ 0xd0599e17, "proc_get_parent_data" },
	{ 0x94c9fb62, "csum_ipv6_magic" },
	{ 0x0f19f3ba, "wiphy_free" },
	{ 0xa133c627, "alloc_etherdev_mqs" },
	{ 0x402db74e, "memcmp" },
	{ 0x37197a78, "vsnprintf" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0x00512d43, "usb_submit_urb" },
	{ 0x8134d220, "usb_register_driver" },
	{ 0xdd6830c7, "sprintf" },
	{ 0x12cfb334, "seq_printf" },
	{ 0xd8248fc3, "kthread_stop" },
	{ 0xde338d9a, "_raw_spin_lock_bh" },
	{ 0x9479a1e8, "strnlen" },
	{ 0xaef1f20d, "system_wq" },
	{ 0xd272d446, "__rcu_read_unlock" },
	{ 0x351a99b4, "kernel_read" },
	{ 0xba6afb2a, "cfg80211_scan_done" },
	{ 0x5a844b26, "__x86_indirect_thunk_r13" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x67628f51, "msleep" },
	{ 0x68fcfd8d, "unregister_netdevice_queue" },
	{ 0xb4f92def, "pskb_expand_head" },
	{ 0x0a589842, "simple_strtoul" },
	{ 0x82fd7238, "__ubsan_handle_divrem_overflow" },
	{ 0x56adb917, "cfg80211_del_sta_sinfo" },
	{ 0x7569f618, "skb_dequeue" },
	{ 0xafbbf94f, "__cfg80211_alloc_reply_skb" },
	{ 0xd272d446, "__rcu_read_lock" },
	{ 0x254b17d2, "cfg80211_michael_mic_failure" },
	{ 0x888b8f57, "strcmp" },
	{ 0x9411b567, "cfg80211_ibss_joined" },
	{ 0x5a844b26, "__x86_indirect_thunk_r9" },
	{ 0xe199f25f, "jiffies_to_usecs" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x006dce64, "filp_close" },
	{ 0x5a844b26, "__x86_indirect_thunk_rax" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x9c0551c6, "tasklet_kill" },
	{ 0xd99598f0, "cfg80211_put_bss" },
	{ 0x5128c20d, "strpbrk" },
	{ 0x5a844b26, "__x86_indirect_thunk_rcx" },
	{ 0xc74f7b60, "unregister_netdev" },
	{ 0x296b9459, "strchr" },
	{ 0x0fc8db40, "usb_alloc_urb" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x7b4cfa02, "__cfg80211_get_bss" },
	{ 0x6e2466e9, "__cfg80211_send_event_skb" },
	{ 0x649ce331, "iwe_stream_add_event" },
	{ 0xfb0b2781, "netif_tx_wake_queue" },
	{ 0x73bebd3f, "param_ops_charp" },
	{ 0x5cae6bc0, "register_netdev" },
	{ 0xdfaa043a, "filp_open" },
	{ 0x5a844b26, "__x86_indirect_thunk_r14" },
	{ 0x73bebd3f, "param_ops_uint" },
	{ 0xbe0bf0cb, "wake_up_process" },
	{ 0x882f8ec1, "skb_queue_tail" },
	{ 0x02f9bbf0, "init_timer_key" },
	{ 0x80f9d308, "cfg80211_inform_bss_frame_data" },
	{ 0x9c0551c6, "__tasklet_hi_schedule" },
	{ 0x252c8e55, "cfg80211_rx_mgmt_ext" },
	{ 0xaa61a814, "cfg80211_ch_switch_started_notify" },
	{ 0x1da2ef36, "usb_put_dev" },
	{ 0xfde4238c, "napi_gro_receive" },
	{ 0xcdd8159c, "flush_signals" },
	{ 0xc1249a30, "strcpy" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0x12ca6142, "ktime_get_with_offset" },
	{ 0xae030cd0, "seq_release" },
	{ 0x9d8dd337, "cfg80211_remain_on_channel_expired" },
	{ 0xfd285498, "register_inetaddr_notifier" },
	{ 0x0f19f3ba, "wiphy_unregister" },
	{ 0x70eca2ca, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xe199f25f,
	0x5218fe90,
	0xc051cdfe,
	0x5a844b26,
	0xbd03ed67,
	0xd7a59a65,
	0xf46d5bf3,
	0x392cf09f,
	0x5a77d5c5,
	0x80e9d089,
	0xf64ac983,
	0xd272d446,
	0x1407cc98,
	0x457edffd,
	0xd6d11a41,
	0x357aaab3,
	0xa53f4e29,
	0xa39aa24c,
	0x7bf8cb05,
	0x8284a69e,
	0xfd285498,
	0x0e0926b0,
	0x2ff9b4e7,
	0xfd285498,
	0xd70733be,
	0xd272d446,
	0xbd03ed67,
	0xac44672f,
	0x14db0d32,
	0x5a844b26,
	0x1d05bb1d,
	0xe4de56b4,
	0x705b6972,
	0x5a844b26,
	0x4ac4312d,
	0x07606888,
	0xfd285498,
	0x60c9c0b3,
	0xa113294b,
	0xff396a89,
	0xd22cd56f,
	0xc01aafd2,
	0x2435d559,
	0xfefac423,
	0xfd285498,
	0x457edffd,
	0x90a48d82,
	0xa61fd7aa,
	0xc74f7b60,
	0x158bf240,
	0x2352b148,
	0x7851be11,
	0xc1e6c71e,
	0x43a349ca,
	0xd272d446,
	0x5cae6bc0,
	0x5adfd8b1,
	0x29ced071,
	0xcfe3d719,
	0xc5ceac9d,
	0xef2ae37d,
	0x40a621c5,
	0x62798cf5,
	0xba5370f7,
	0x8d1d7639,
	0x96c07e76,
	0xae030cd0,
	0x9d212913,
	0x058c185a,
	0x4549c894,
	0x056c43c7,
	0xdce5d618,
	0xf4d25b68,
	0x5629a063,
	0x2309c056,
	0x32feeafc,
	0x57860fb4,
	0x388dee05,
	0x457edffd,
	0x4d271a65,
	0x5a644742,
	0x0a711811,
	0x56adb917,
	0xc69a835f,
	0xa53f4e29,
	0xa5c7582d,
	0x2352b148,
	0x224a53e7,
	0xe54e0a6b,
	0xde338d9a,
	0x49733ad6,
	0xd272d446,
	0xd272d446,
	0x81a1a811,
	0x65026e43,
	0x77fd1475,
	0xedb811f7,
	0x593bc32a,
	0x5e505530,
	0xd272d446,
	0xd272d446,
	0xe8213e80,
	0xc74f7b60,
	0x58906f42,
	0xd99598f0,
	0x04f14161,
	0x0feb1e94,
	0x0a711811,
	0xcbae5412,
	0xde338d9a,
	0x2a11fff9,
	0xf1de9e85,
	0x73bebd3f,
	0xd710adbf,
	0x005b7b07,
	0xb2fa43dd,
	0x5a844b26,
	0x73bebd3f,
	0xe97c47f7,
	0xcdec1689,
	0x28a786c6,
	0x8db9b6ac,
	0x092a35a2,
	0x2309c056,
	0x173ec8da,
	0xc1bbd667,
	0xa96d32ba,
	0x5a844b26,
	0xc609ff70,
	0x20d14f53,
	0xbd03ed67,
	0xd0a6e881,
	0xc5ceac9d,
	0x20fe0e51,
	0x16129640,
	0x03558e94,
	0x82fd7238,
	0x951536d8,
	0x5a844b26,
	0xd272d446,
	0x1d05bb1d,
	0x0001e22b,
	0xfd285498,
	0xd272d446,
	0x5d3be6f8,
	0x27683a56,
	0x784f1f63,
	0x97eb8d40,
	0xd710adbf,
	0xc8f3567c,
	0x2d88a3ab,
	0x7e00c71b,
	0x7295b8c3,
	0xad77dc47,
	0xe1e1f979,
	0x0a711811,
	0xc0761c9a,
	0xd0599e17,
	0x94c9fb62,
	0x0f19f3ba,
	0xa133c627,
	0x402db74e,
	0x37197a78,
	0x6ac784f4,
	0x00512d43,
	0x8134d220,
	0xdd6830c7,
	0x12cfb334,
	0xd8248fc3,
	0xde338d9a,
	0x9479a1e8,
	0xaef1f20d,
	0xd272d446,
	0x351a99b4,
	0xba6afb2a,
	0x5a844b26,
	0xf46d5bf3,
	0x67628f51,
	0x68fcfd8d,
	0xb4f92def,
	0x0a589842,
	0x82fd7238,
	0x56adb917,
	0x7569f618,
	0xafbbf94f,
	0xd272d446,
	0x254b17d2,
	0x888b8f57,
	0x9411b567,
	0x5a844b26,
	0xe199f25f,
	0xcb8b6ec6,
	0x006dce64,
	0x5a844b26,
	0xde338d9a,
	0x9c0551c6,
	0xd99598f0,
	0x5128c20d,
	0x5a844b26,
	0xc74f7b60,
	0x296b9459,
	0x0fc8db40,
	0x092a35a2,
	0x7b4cfa02,
	0x6e2466e9,
	0x649ce331,
	0xfb0b2781,
	0x73bebd3f,
	0x5cae6bc0,
	0xdfaa043a,
	0x5a844b26,
	0x73bebd3f,
	0xbe0bf0cb,
	0x882f8ec1,
	0x02f9bbf0,
	0x80f9d308,
	0x9c0551c6,
	0x252c8e55,
	0xaa61a814,
	0x1da2ef36,
	0xfde4238c,
	0xcdd8159c,
	0xc1249a30,
	0x534ed5f3,
	0x12ca6142,
	0xae030cd0,
	0x9d8dd337,
	0xfd285498,
	0x0f19f3ba,
	0x70eca2ca,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"jiffies_to_msecs\0"
	"single_open\0"
	"regulatory_set_wiphy_regd_sync\0"
	"__x86_indirect_thunk_r10\0"
	"vmemmap_base\0"
	"vmalloc_noprof\0"
	"mutex_unlock\0"
	"eth_type_trans\0"
	"ethtool_op_get_link\0"
	"cfg80211_ready_on_channel\0"
	"__copy_overflow\0"
	"yield\0"
	"cfg80211_mgmt_tx_status_ext\0"
	"skb_pull\0"
	"nla_put\0"
	"mutex_lock_interruptible\0"
	"memcpy\0"
	"device_wakeup_enable\0"
	"cfg80211_connect_done\0"
	"proc_mkdir_data\0"
	"unregister_netdevice_notifier\0"
	"kthread_complete_and_exit\0"
	"napi_complete_done\0"
	"register_netdevice_notifier\0"
	"sized_strscpy\0"
	"synchronize_net\0"
	"page_offset_base\0"
	"kern_path\0"
	"nla_put_nohdr\0"
	"__x86_indirect_thunk_r15\0"
	"netif_receive_skb\0"
	"__ubsan_handle_load_invalid_value\0"
	"netdev_set_default_ethtool_ops\0"
	"__x86_indirect_thunk_rdx\0"
	"kmalloc_caches\0"
	"wiphy_new_nm\0"
	"unregister_inetaddr_notifier\0"
	"__init_swait_queue_head\0"
	"usb_autopm_get_interface\0"
	"skb_trim\0"
	"seq_read\0"
	"get_random_u32\0"
	"strncmp\0"
	"remove_proc_entry\0"
	"unregister_inet6addr_notifier\0"
	"skb_push\0"
	"__ubsan_handle_out_of_bounds\0"
	"__check_object_size\0"
	"free_netdev\0"
	"__pskb_pull_tail\0"
	"timer_delete\0"
	"rtnl_is_locked\0"
	"__mutex_init\0"
	"strlen\0"
	"rtnl_lock\0"
	"register_netdevice\0"
	"napi_schedule_prep\0"
	"__netdev_alloc_skb\0"
	"cfg80211_roamed\0"
	"usb_free_urb\0"
	"cfg80211_vendor_cmd_reply\0"
	"snprintf\0"
	"usb_get_dev\0"
	"wiphy_register\0"
	"__kmalloc_cache_noprof\0"
	"const_pcpu_hot\0"
	"single_release\0"
	"iwe_stream_add_point\0"
	"jiffies\0"
	"device_set_wakeup_capable\0"
	"usb_deregister\0"
	"cfg80211_disconnected\0"
	"proc_create_data\0"
	"strncasecmp\0"
	"netif_carrier_off\0"
	"mod_timer\0"
	"wait_for_completion_timeout\0"
	"seq_lseek\0"
	"skb_put\0"
	"init_net\0"
	"usb_autopm_put_interface\0"
	"__napi_schedule\0"
	"cfg80211_new_sta\0"
	"find_vpid\0"
	"memmove\0"
	"strsep\0"
	"timer_delete_sync\0"
	"get_random_bytes\0"
	"__fortify_panic\0"
	"_raw_spin_unlock_bh\0"
	"queue_work_on\0"
	"__stack_chk_fail\0"
	"dump_stack\0"
	"_raw_spin_unlock_irqrestore\0"
	"complete\0"
	"seq_open\0"
	"single_open_size\0"
	"ieee80211_get_channel_khz\0"
	"kthread_should_stop\0"
	"__fentry__\0"
	"rtnl_unlock\0"
	"_printk\0"
	"netif_tx_stop_all_queues\0"
	"kernel_write\0"
	"cfg80211_unlink_bss\0"
	"cfg80211_external_auth_request\0"
	"usleep_range_state\0"
	"napi_disable\0"
	"__const_udelay\0"
	"_raw_spin_lock\0"
	"__cfg80211_alloc_event_skb\0"
	"vfree\0"
	"param_array_ops\0"
	"__kmalloc_large_noprof\0"
	"usb_control_msg\0"
	"kernel_sigaction\0"
	"__x86_indirect_thunk_r12\0"
	"param_ops_int\0"
	"up\0"
	"tasklet_init\0"
	"netif_napi_add_weight_locked\0"
	"__usecs_to_jiffies\0"
	"_copy_to_user\0"
	"netif_carrier_on\0"
	"sscanf\0"
	"dev_addr_mod\0"
	"__udelay\0"
	"__x86_indirect_thunk_rbx\0"
	"strncpy\0"
	"__netif_napi_del_locked\0"
	"random_kmalloc_seed\0"
	"dev_kfree_skb_any_reason\0"
	"usb_kill_urb\0"
	"csum_partial\0"
	"skb_copy\0"
	"dev_alloc_name\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"dev_get_by_name\0"
	"__x86_indirect_thunk_r8\0"
	"schedule\0"
	"netif_rx\0"
	"down_interruptible\0"
	"register_inet6addr_notifier\0"
	"__x86_return_thunk\0"
	"pcpu_hot\0"
	"memset\0"
	"kfree_skb_list_reason\0"
	"skb_copy_bits\0"
	"__kmalloc_noprof\0"
	"kthread_create_on_node\0"
	"cancel_work_sync\0"
	"skb_clone\0"
	"ieee80211_freq_khz_to_channel\0"
	"cfg80211_ch_switch_notify\0"
	"_raw_spin_lock_irqsave\0"
	"napi_enable\0"
	"kill_pid\0"
	"proc_get_parent_data\0"
	"csum_ipv6_magic\0"
	"wiphy_free\0"
	"alloc_etherdev_mqs\0"
	"memcmp\0"
	"vsnprintf\0"
	"schedule_timeout\0"
	"usb_submit_urb\0"
	"usb_register_driver\0"
	"sprintf\0"
	"seq_printf\0"
	"kthread_stop\0"
	"_raw_spin_lock_bh\0"
	"strnlen\0"
	"system_wq\0"
	"__rcu_read_unlock\0"
	"kernel_read\0"
	"cfg80211_scan_done\0"
	"__x86_indirect_thunk_r13\0"
	"mutex_lock\0"
	"msleep\0"
	"unregister_netdevice_queue\0"
	"pskb_expand_head\0"
	"simple_strtoul\0"
	"__ubsan_handle_divrem_overflow\0"
	"cfg80211_del_sta_sinfo\0"
	"skb_dequeue\0"
	"__cfg80211_alloc_reply_skb\0"
	"__rcu_read_lock\0"
	"cfg80211_michael_mic_failure\0"
	"strcmp\0"
	"cfg80211_ibss_joined\0"
	"__x86_indirect_thunk_r9\0"
	"jiffies_to_usecs\0"
	"kfree\0"
	"filp_close\0"
	"__x86_indirect_thunk_rax\0"
	"_raw_spin_unlock\0"
	"tasklet_kill\0"
	"cfg80211_put_bss\0"
	"strpbrk\0"
	"__x86_indirect_thunk_rcx\0"
	"unregister_netdev\0"
	"strchr\0"
	"usb_alloc_urb\0"
	"_copy_from_user\0"
	"__cfg80211_get_bss\0"
	"__cfg80211_send_event_skb\0"
	"iwe_stream_add_event\0"
	"netif_tx_wake_queue\0"
	"param_ops_charp\0"
	"register_netdev\0"
	"filp_open\0"
	"__x86_indirect_thunk_r14\0"
	"param_ops_uint\0"
	"wake_up_process\0"
	"skb_queue_tail\0"
	"init_timer_key\0"
	"cfg80211_inform_bss_frame_data\0"
	"__tasklet_hi_schedule\0"
	"cfg80211_rx_mgmt_ext\0"
	"cfg80211_ch_switch_started_notify\0"
	"usb_put_dev\0"
	"napi_gro_receive\0"
	"flush_signals\0"
	"strcpy\0"
	"__msecs_to_jiffies\0"
	"ktime_get_with_offset\0"
	"seq_release\0"
	"cfg80211_remain_on_channel_expired\0"
	"register_inetaddr_notifier\0"
	"wiphy_unregister\0"
	"module_layout\0"
;

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDApC85Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC832d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApC85Dd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v35B2p0502d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v35BCp0102d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "34EA360CF46C6C66CD86D1A");
