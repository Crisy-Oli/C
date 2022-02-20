#include <stdio.h>
void main()
{
    int n, a;
    double sum = 1, e = 1;
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        sum *= a;
        if (a % 5 == 0)
            e += sum;
    }
    printf("%.0lf", sum);
}