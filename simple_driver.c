// simple_driver.c

#include <linux/init.h>       // Needed for macros like __init and __exit
#include <linux/module.h>     // Core header for loading LKMs into the kernel
#include <linux/kernel.h>     // Contains types, macros, functions for the kernel

// Meta-information
MODULE_LICENSE("GPL");                 // License type
MODULE_AUTHOR("Your Name");            // Author name
MODULE_DESCRIPTION("A simple Linux driver"); 
MODULE_VERSION("0.1");

// This function is called when the module is loaded
static int __init simple_driver_init(void) {
    pr_info("simple_driver: Hello, world from the simple driver!\n");
    return 0; // Return 0 indicates successful loading
}

// This function is called when the module is removed
static void __exit simple_driver_exit(void) {
    pr_info("simple_driver: Goodbye, world from the simple driver!\n");
}

// Macros that identify the above functions as initialization and cleanup
module_init(simple_driver_init);
module_exit(simple_driver_exit);
