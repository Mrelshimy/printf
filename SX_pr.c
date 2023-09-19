#include "main.h"

/**
 * SX_pr - encodes and prints uppercase hexadecimal numbers
 * @a : input argument
 *
 * Discription Function to encode uppercase hexadecimal numbers
 *
 * Return: length
 */

int SX_pr(int a)
{
	int c_ret = 0;
	int j;

	if (a == 0)
	{
		putchar('0');
		c_ret++;
	}
	else
	{
		char hex_chars[16] = "0123456789ABCDEF";
		char hex_string[9];
		int i = 0;

		while (a > 0)
		{
			hex_string[i] = hex_chars[a % 16];
			a /= 16;
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
