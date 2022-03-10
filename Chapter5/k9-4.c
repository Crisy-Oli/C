//求出Fibonacci数列前20项之和。（k9 - 4.c）
#include <stdio.h>
void main()
{
    int i, j, k, a, sum = 0;
    i = j = 1;
    for (a = 3; a <= 20; a++)
    {
        k = i + j;
        sum = sum + k;
        i = j;
        j = k;
    }
    printf("%d", sum + 2);
}
