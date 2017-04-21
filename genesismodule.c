// includes in kernel source tree not in user include
#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
int init_genesis(void){
  printk("An init module genesis\n");
  // return type to indicate if succeeded
  return 0;
}

void cleanup_genesis(void){
  printk("In cleanup module genesis\n");
}

module_init(init_genesis);
module_exit(cleanup_genesis);
