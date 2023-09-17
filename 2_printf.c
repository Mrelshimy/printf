#include "main.h"

/**
 * _printf - c prog for printing a formatted string
 * @format: pointer to the format string
 *
 * Discription: a c function that imitates the stdio.h printf fn.
 *
 * Return: characters count in the string
 */

int _printf(const char *format, ...)
{
	call_fn check_sp[] = {
		{"%b", bin_pr},
		{"%c", char_pr},
		{"%%", per_pr},
		{"%d", int_pr},
		{"%s", str_pr},
	};

	int count_ret = 0;
	int n = 0, m;
	va_list pfargs;

	va_start(pfargs, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[n] != '\0')
	{
		m = 4;
		while (m >= 0)
		{
			if (check_sp[m].sp[0] == format[n] && check_sp[m].sp[1] == format[n + 1])
			{
				count_ret += check_sp[m].fn(pfargs);
				n = n + 2;
			}
			m--;
		}
		putchar (format[n]);
		count_ret++;
		n++;

	}
	va_end(pfargs);
	return (count_ret);
}
