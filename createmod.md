> * Make sure you understand what exactly you are doing
* createmodule and change directory into it
* run `#echo "obj-m := genesismodule.o" > Makefile` to create Makefile
* run `#make -C /lib/modules/$(uname -r)/build M=$PWD modules` to run Makefile and get config files
* run `#insmod ./genesismodule.ko` .ko indicates a kernel object
* output of the module will be available on `#dmesg` or `#tail -f /var/log/messages`
* run `#rmmod genesismodule` to remove module  
* output of the module will be available on `#dmesg` or `#tail -f /var/log/messages`
