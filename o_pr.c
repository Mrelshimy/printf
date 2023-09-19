#include "main.h"

/**
 * o_pr - encodes and prints octal numbers
 * @pfargs : input argument
 *
 * Discription Function to encode octal numbers
 *
 * Return: string length
 */

int o_pr(va_list pfargs)
{
	unsigned int value = va_arg(pfargs, unsigned int);
	int c_ret = 0;
	int j;

	if (value == 0)
	{
		putchar('0');
		c_ret++;
	}
	else
	{
		int digits[12];
		int i = 0;

	while (value > 0)
	{
		digits[i] = value % 8;
		value /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(digits[j] + '0');
		c_ret++;
	}
	}

	return (c_ret);
}
