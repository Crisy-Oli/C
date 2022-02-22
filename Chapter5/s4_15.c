#include <stdio.h>
void main()
{
    int a;
    for (a = 0; a <= 15; a++)
    {
        if (90 == 2 * a + 4 * (30 - a))
            printf("鸡有%d只，兔有%d只", a, 30 - a);
    }
}