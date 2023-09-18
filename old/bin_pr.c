#include "main.h"

/**
 * bin_pr - function to print an unsigned int in binary
 *@pfargs: list of input argument
 *
 *Description: function to print an integer in binary w/o Printf
 *
 *Return: length of printed int
 */

int bin_pr(va_list pfargs)
{
	unsigned int dec_int = va_arg(pfargs, int);
	int a = 0, b;
	unsigned int bin_int[1024];

	if (!pfargs)
		exit(-1);

	if (dec_int == 0)
	{
		putchar('0');
		return (1);
	}

	while (dec_int != 0)
	{
		bin_int[a] = dec_int % 2;
		dec_int = dec_int / 2;
		a++;
	}

	b = a - 1;

	for (b = a - 1; b >= 0; b--)
		putchar(bin_int[b] + '0');

	return (a);
}
