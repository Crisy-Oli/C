#include <stdio.h>
void main()
{
    int i, n, t = 1;
    double flag = 1, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (1 / flag) * t;
        t = -t;
        flag += 3;
    }
    printf("sum=%.3f", sum);
}