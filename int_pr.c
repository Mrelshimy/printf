#include "main.h"

/**
 * int_pr - function to print an integer argument input
 *@pfargs: list of input argument
 *
 *Description: function to print a integer input w/o Printf
 *
 *Return: length of printed int
 */

int int_pr(va_list pfargs)
{
	int int_ip = va_arg(pfargs, int);
	int i = 1;
	int abs_int, last_d, curr_d, tens = 1;

	last_d = int_ip % 10;
	int_ip = int_ip / 10;
	abs_int = int_ip;

	if (last_d < 0)
	{
		_putchar('-');
		int_ip = -int_ip;
		last_d = -last_d;
		abs_int = -abs_int;
		i++;
	}

	if (abs_int > 0)
	{
		while (abs_int / 10 != 0)
		{
			tens = tens * 10;
			abs_int = abs_int / 10;
		}
		abs_int = int_ip;

		while (tens > 0)
		{
			curr_d = abs_int / tens;
			_putchar('0' + curr_d);
			abs_int = abs_int - (tens * curr_d);
			tens = tens / 10;
			i++;
		}
	}
	_putchar('0' + last_d);
	return (i);
}
