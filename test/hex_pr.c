#include "main.h"

/**
 * hex_pr - function to print #
 *@pfargs: input argument
 *
 *Description: function to print a character input w/o printf
 *
 *Return: 1
 */

int hex_pr(va_list pfargs, const char *format)
{
    unsigned int x = va_arg(pfargs, unsigned int);
    int c_ret = 0;

    if (*format == '#')
    {
        putchar('0');
        putchar('x');
        c_ret += 2;
    }

    write(1, &c_ret, strlen(c_ret));

	return (1);
}
