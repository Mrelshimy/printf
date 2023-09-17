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
	int i = 0, j;
	char *s_r = va_arg(pfargs, char*);

	if (s_r == NULL)
		s_r = "(null)";
	while (s_sp[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
		putchar(s_r[j]);
	return (i);
}
