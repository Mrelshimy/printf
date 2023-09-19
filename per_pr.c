#include "main.h"

/**
 * per_pr - function to print %
 *
 * Description: function to print % w/o printf
 *
 * Return: 1
 */

int per_pr(void)
{
	int x = 37;

	write(1, &x, 1);
	return (1);
}
