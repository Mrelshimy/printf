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

	write(1, &c_sp, 1);
	return (1);
}
