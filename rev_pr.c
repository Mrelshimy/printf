#include "main.h"

/**
 * rev_pr - function to print string in reverse
 *@pfargs: list of input argument
 *
 * Description: function to print string in reverse
 *
 *Return: length of printed int
 */

int rev_pr(va_list pfargs)
{
	int a = 0, b;
	char *s_r = va_arg(pfargs, char*);
	
	if (s_r == NULL)
		return (-1);

	while (s_r[a] != '\0')
		a++;

	for (b = a - 1; b >= 0; b--)
		putchar(s_r[b]);

	return (a);
}
