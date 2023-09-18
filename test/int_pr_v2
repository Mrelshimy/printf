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
	char buffer[1024];
	int len = strlen(buffer);
	int i = 0;
	int s_sp = va_arg(pfargs, int);
	sprintf(buffer, "%d", s_sp);

	for (i = 0; i < len; i++)
	{
		putchar(buffer[i]);
	}
	return (len);
}
