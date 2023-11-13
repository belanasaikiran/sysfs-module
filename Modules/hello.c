#include <linux/init.h>
#include <linux/module.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sai Kiran Belana");
MODULE_DESCRIPTION("Hello Kernel Module to test");


static int hello_init(void){
	printk(KERN_ALERT "TEST: Hello world, this is Sanju\n");
	return 0;
}


static void hello_exit(void){
	printk(KERN_ALERT "TEST: Good byte, from Sanju\n");
}


module_init(hello_init);
module_exit(hello_exit);
