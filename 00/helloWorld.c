#include <linux/module.h>
#include <linux/init.h>
/*Meta data*/
MODULE_LICENSE("GPL");
MODULE_AUTHOR("The7ag");
MODULE_DESCRIPTION("Hello World Module");
/*
@breif: This function is called when the module is loaded into the kernel
*/
static int __init helloWorld_init(void)
{
    printk(KERN_INFO "Hello World\n");
    return 0;
}
/*
@breif: This function is called when the module is removed from the kernel
*/
static void __exit helloWorld_exit(void)
{
    printk(KERN_INFO "Goodbye World\n");
}
module_init(helloWorld_init);
module_exit(helloWorld_exit);