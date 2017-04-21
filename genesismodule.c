// includes in kernel source tree not in user include
#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>
MODULE_AUTHOR ("Eric Caleb");
MODULE_DESCRIPTION ("Simple genesis loadable module");
MODULE_LICENSE("MIT");

static int number = 2017;
static char *name = "Shadowscript";

module_param(number, int, S_IRUGO);
module_param(name, charp, S_IRUGO);

MODULE_PARM_DESC(number, "A sample integer modifiable parameter");
MODULE_PARM_DESC(name, "A sample string modifiable parameter");

int init_genesis(void){
  printk("%d %s\n", number, name);
  // return type to indicate if succeeded
  return 0;
}

module_init(init_genesis);

void cleanup_genesis(void){
  printk("Module genesis is unloaded\n");
}

module_exit(cleanup_genesis);
