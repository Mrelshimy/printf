#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct call_fn - struct for calling printing functions
 *
 * Description: a structure to check specifier and call it's function
 *
 *@sp: pointer to char - specifier
 *@fn: pointer to the called function
 */

typedef struct call_fn
{
	char *sp;
	int (*fn)();
} call_fn;

int str_pr(va_list pfargs);
int char_pr(va_list pfargs);
int per_pr(void);
int int_pr(va_list pfargs);
int _printf(const char *format, ...);

#endif
