#include "main.h"

int main()
  {
                   int a, b, c, d, e, f;
                   a = _printf("Hello %b World\n", 9);
                   printf("a %d\n", a);
                   b = _printf("Hello %d world\n", 12345);
                   printf("b %d\n", b);
                  c = _printf("Hello %srld\n", "wo");
                  printf("c %d\n", c);
                  d = _printf("H%cllo world\n", 'e');
                  printf("d %d\n", d);
                  e = _printf("%%\n");
                  printf("e %d\n", e);
                  f = _printf("%R\n", "ABCDabcd");
                  _printf("%d\n", f);
                  _printf("%r\n", "11111 00000 22222");
                  _printf("==========================Test Task No. 0==========================\n");
                  _printf("Let's print a simple sentence.\n");
                 _printf("%s", "I am a string !\n");
                  _printf("%c\n", 'S');
                  _printf("%%\n");
                  _printf("==========================Test Task No. 1==========================\n");
                  _printf("%d\n", 1024);
                  _printf("%d\n", -1024);
                  _printf("%d\n", INT_MAX);
                  return (0);
 }
