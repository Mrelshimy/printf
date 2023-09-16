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
	va_list pfargs;

	if (format == NULL || (format[0] == '%' && !format[1]))
	return (-1);
/*	if (format[0] == '%' && format[1] == ' ' && !format[2]) */
/*	return (-1); */
	va_start(pfargs, format);
	while (*format)
	{
		if (*format != '%')
		{	write(1, format, 1);
			count_ret++;
		}
		else
		{	format++;
			if (*format == '\0')
				break;
			else if (*format == 'c')
			{	char c_sp = va_arg(pfargs, int);

				write(1, &c_sp, 1);
				count_ret++;
			}
			else if (*format == 's')
			{	char *s_sp = va_arg(pfargs, char*);
				int i = strlen(s_sp);

				write(1, s_sp, i);
				count_ret += i;
			}
			else if (*format == '%')
			{	write(1, format, 1);
				count_ret++;
			}
		}
		format++;
	}
	va_end(pfargs);
	return (count_ret);
}
