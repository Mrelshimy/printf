#include "main.h"

/**
 * str_pr - function to print a string argument input
 *@pfargs: input argument
 *
 *Description: function to print a string input w/o printf
 *
 *Return: string length
 */

int str_pr(va_list pfargs)
{
	int i;
	char *s_sp = va_arg(pfargs, char *);

	i = strlen(s_sp);
	write(1, s_sp, i);
	return (i);
}
