//已知四位数a2b3能被23整除，编程求出此数。 （k9-3.c）
#include <stdio.h>
void main()
{
    int a, b, x;
    for (a = 1; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            if ((a * 1000 + 200 + b * 10 + 3) % 23 == 0)
                printf("%d2%d3 ", a, b);
        }
    }
}