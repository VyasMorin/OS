#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
MODULE_LICENSE("GPL");
static int __init start(void){
	printk(KERN_INFO "POCETAK! Broj jiffiesa: %lu, broj sekundi sada:%lu\n",jiffies, jiffies /HZ);
	return 0;
}

static void __exit end(void){
	printk(KERN_INFO "KRAJ!Broj jiffiesa: %lu, broj sekundi sada:%lu\n",jiffies, jiffies /HZ);
}
module_init(start);
module_exit(end);
