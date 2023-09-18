#include "main.h"

/**
 * ptr_pr - function to print variable address
 *@pfargs: input argument
 *
 *Description: function to print a string input w/o printf
 *
 *Return: 1
 */

int ptr_pr(va_list pfargs)
{
    void *ptr = va_arg(pfargs, void *);

    write(1, &ptr, strlen(ptr));

    return 1;
}
