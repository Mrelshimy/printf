#include "main.h"

/**
 * x_pr - encodes and prints lowercase hexadecimal numbers
 * @pfargs : input argument
 *
 * Discription Function to encode lowercase hexadecimal numbers
 *
 * Return: string length
 */

int x_pr(va_list pfargs)
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
	char hex_chars[16] = "0123456789abcdef";
	char hex_string[9];
	int i = 0;

	while (value > 0)
	{
		hex_string[i] = hex_chars[value % 16];
		value /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(hex_string[j]);
		c_ret++;
	}
	}

	return (c_ret);
}
