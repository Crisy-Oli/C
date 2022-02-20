#include <stdio.h>
main()
{
    int max, a, b, c, x, y;
    a = getchar();
    b = getchar();
    c = getchar();
    x = a > b ? a : b;
    y = a > c ? a : c;
    max = x >= y ? x : y;
    putchar(max);
}