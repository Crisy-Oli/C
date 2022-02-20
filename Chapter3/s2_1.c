#include <stdio.h>
main()
{
    int a = 2, b = 3, c = 4;
    a *= 10 + (b++) - (++c);
    printf("a=%d,b=%d,c=%d\n", a, b, c);
}