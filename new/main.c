#include "main.h"

int main()
{
	int a, b, c, d, e;
	a = _printf("Hello %b World\n", 9);
	printf("a %d\n", a);
	b = _printf("Hello %d world\n", 12345);
	printf("b %d\n", b);
	c = _printf("Hello %s orld\n", "wo");
	printf("c %d\n", c);
	d = _printf("H%cllo world\n", 'e');
	printf("d %d\n", d);
	e = _printf("%%\n");
	printf("e %d\n", e);
	return (0);
}
