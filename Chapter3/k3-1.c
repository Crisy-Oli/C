#include <stdio.h>
main()
{
    int a = 10, b = 20, c = 30, x;
    x = a, a = c, c = b, b = x;
    printf("a=%d,b=%d,c=%d", a, b, c);
}