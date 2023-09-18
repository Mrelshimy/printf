#include "main.h"

/**
 *rot13_pr - encodes and prints string using ROT13
 *@pfargs : input argument
 *
 *Discription Function to encode a string usinr ROT13
 *
 *Return: string length
 */

int rot13_pr(va_list pfargs)
{
	char *str_rot13 = va_arg(pfargs, char *);
	int j = 0;
	char old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str_rot13 == NULL)
		return (-1);

	while (str_rot13[j] != '\0')
	{
		int i = 0;

		while (i < 52)
		{

			if (str_rot13[j] == old[i])
			{
				putchar(new[i]);
				break;
			}
			i++;
		}
		 j++;
	}
	return (j);
}
