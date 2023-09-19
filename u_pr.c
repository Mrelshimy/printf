#include "main.h"

/**
 *u_pr - encodes and prints unsigned integers
 *@pfargs : input argument
 *
 *Discription Function to encode unsigned integers
 *
 *Return: string length
 */

int u_pr(va_list pfargs)
{
	int value = va_arg(pfargs, int);
	int c_ret = 0;
	int j;

	if (value == 0)
	{
		putchar('0');
		c_ret++;
	}
	else
	{
		int digits[10];
		int i = 0;

		if (value < 0)
		{
			putchar('-');
			c_ret++;
			value = -value; 
		}

		while (value > 0)
		{
			digits[i] = value % 10;
			value /= 10;
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
