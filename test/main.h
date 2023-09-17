#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct call_fn
{
       	char* sp;
	int (*fn)();
} call_fn;

int str_pr(va_list pfargs);
int char_pr(va_list pfargs);
int per_pr(void);
int dec_pr(va_list pfargs);
int int_pr(va_list pfargs);
int _printf(const char *format, ...);

#endif
