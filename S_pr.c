#include "main.h"

/**
 * S_pr - function to print an special values in hex
 * @pfargs: list of input argument
 *
 * Description: function to print special values in hex
 *
 * Return: length of printed int
 */

int S_pr(va_list pfargs)
{
	char *S_ip = va_arg(pfargs, char *);
	int i = 0;
	int count_ret = 0;
	int dec_val;

	if (S_ip == NULL)
		return (-1);

	while (S_ip[i] != '\0')
	{
		if (S_ip[i] < 32 || S_ip[i] >= 127)
		{
			putchar('\\');
			putchar ('x');
			count_ret += 2;
			dec_val = S_ip[i];

			if (dec_val < 16)
			{
				putchar('0');
				count_ret++;
				count_ret += SX_pr(dec_val);
			}
		}
		else
		{
			putchar(S_ip[i]);
			count_ret++;
		}
			i++;
	}

	return (count_ret);
}
