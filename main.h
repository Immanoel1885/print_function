#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct formspec - a structure that specifies the symbols and
 * their relayted functions
 * @symbol: the symbol that links to a function, e.g: %d,%c
 * @function: the related function
 */

 struct formspec{
    char *symbol;
    int (*function)(va_list);
 } form_spec;
 typedef struct formspec form_spec;

 

#endif
