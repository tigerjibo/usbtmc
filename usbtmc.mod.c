#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x57b6dccf, "module_layout" },
	{ 0x48068460, "cdev_del" },
	{ 0x7f210c6, "kmalloc_caches" },
	{ 0xf848f715, "cdev_init" },
	{ 0x25ec1b28, "strlen" },
	{ 0x9587216d, "dev_set_drvdata" },
	{ 0x4aabc7c4, "__tracepoint_kmalloc" },
	{ 0xf6df97e2, "usb_reset_configuration" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x4ff9e7ed, "kmem_cache_alloc_notrace" },
	{ 0x1db96a8d, "usb_deregister" },
	{ 0xea147363, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd9ad8d1e, "usb_control_msg" },
	{ 0x27a24cee, "cdev_add" },
	{ 0x41a6739a, "usb_get_dev" },
	{ 0x23bacd63, "usb_bulk_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bd1c615, "usb_register_driver" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x1e4e1ba1, "dev_get_drvdata" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EA308EC18DE58FFC0CE5499");
