#include "main.h"

/**
 * int_pr - function to print an integer argument input
 *@pfargs: list of input argument
 *
 *Description: function to print a integer input w/o Printf
 *
 *Return: the printed values
 */

int int_pr(va_list pfargs)
{
	char buffer[1024];
	char *s_sp = va_arg(pfargs, char *);

	itoa(s_sp, buffer, 10);
	for (int i = 0; i < strlen(buffer); i++)
	{
		putchar(buffer[i]);
	}
	return (strlen(buffer));
}
