#include "main.h"

/**
 * dec_pr  - function to print decimal ints
 *@pfargs: input argument
 *
 *Description: function to print decimal ints
 *
 *Return: string length
 */

int str_pr(va_list pfargs)
{
	int i;
	int d_sp = va_arg(pfargs, int);

	write(1, d_sp, i);
	return (i);
}
