/* 
 * hola.c - Basic kernel module.
 */ 

#include<linux/module.h>    /* Needed by all modules */
#include<linux/init.h>      /* Needed for the macros */
#include<linux/kernel.h>    /* Needed for printk() */

// Function executed at the time of loading the driver
static int hello_init(void){   
   printk(KERN_ALERT "¡Hola desde el kernel! Inicia ejecución de controlador que no hace nada.\n");
   return 0;
}

// Function executed at the time of exiting the driver
static void hello_exit(void){
   printk(KERN_INFO "¡Adiós desde el kernel! Termina ejecución de controlador.\n");
}

// Methods are passed to the init and exit apis
module_init(hello_init);
module_exit(hello_exit);

// Module information
MODULE_AUTHOR("Alain");
MODULE_DESCRIPTION("Alain's first driver.");
