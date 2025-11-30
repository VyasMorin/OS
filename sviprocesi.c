#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
MODULE_LICENSE("GPL");
static int __init start(void){
	printk(KERN_INFO "\n\n\n\n");
	struct task_struct* task;
	for_each_process(task){
		printk(KERN_INFO "ime izvršne datoteke bez staze:%s PID procesa:%d. Zanimljiv property, recent_used_cpu:%d \n",task->comm,task->pid,task->recent_used_cpu);
	}
	
	
	return 0;
}

static void __exit end(void){
	printk(KERN_INFO "KRAJ!\n\n\n\n\n\n");
}
module_init(start);
module_exit(end);
