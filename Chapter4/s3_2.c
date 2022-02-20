#include <stdio.h>
void main()
{
    int a, b, c, d, x;
    a = c = 0;
    b = 1;
    d = 20;
    if (a)
        d = d - 10;
    else if (!b)
        if (!c)
            x = 15;
        else
            x = 25;
    printf("d=%d\n", d);
}