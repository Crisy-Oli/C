//输出100以内的所有素数（每行输出6个）。（k9-7.c）
#include <stdio.h>
void main()
{
    int i, n, a = 0;
    for (i = 2; i <= 100; i++)
    {
        for (n = 2; n < i; n++)
            if (i % n == 0)
                break;
        if (n >= i)
        {
            printf("%d ", i);
            a++;
        }
        if (a % 6 == 0)
            printf("\n");
    }
}