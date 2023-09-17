#include "main.h"

int main()
{
	int a, b, c ,d, e, f, g;
	a = _printf("Hello World\n");
	printf("a %d\n", a);
	b = _printf("H%cllo\n", 'e');
	printf("b %d\n", b);
	c = _printf("world %s Hello\n", "Hello");
	printf("c %d\n", c);
	d = _printf("%%Hello%%world%%\n");
	printf("d %d\n", d);
	e = _printf("Hi %morld\n");
	printf("e %d\n", e);
	f = _printf("% ");
	printf("f %d\n", f);
	g = _printf("%d", 100);
	 printf("g %d\n", g);
	return(0);
}
