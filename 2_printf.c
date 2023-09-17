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
	int count_ret = 0;
	int n;
	va_list pfargs;
	call_fn check_sp[] = {
		{"%s", str_pr},
		{"%c", char_pr},
		{"%%", per_pr},
		{"%d", int_pr},
		{"%i", int_pr}
		};

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(pfargs, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count_ret++;
		}
		else
		{
			format++;
			for (n = 0; n < 5; n++)
			{
				if (*format == check_sp[n].sp[1])
					count_ret += check_sp[n].fn(pfargs);
			}
		}
		format++;
	}
	va_end(pfargs);
	return (count_ret);
}
