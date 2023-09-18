#include "main.h"

/**
 * char_pr - function to print a character argument input
 *@pfargs: input argument
 *
 *Description: function to print a character input w/o printf
 *
 *Return: 1
 */

int char_pr(va_list pfargs)
{
	int c_sp = va_arg(pfargs, int);

	putchar(c_sp);
	return (1);
}
