//求1000以内的完数。完数就是其真因子的和等于其本身的数。（k9-6.c）
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        for (n = 1, sum = 0; n < i; n++)
            if (i % n == 0)
                sum = sum + n;
        if (sum == i)
            printf("%d ", i);
    }
}
