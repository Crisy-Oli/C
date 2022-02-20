#include <stdio.h>
void main()
{
    int n, a;
    double sum = 1;
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
        sum *= a;
    printf("%.0lf", sum);
}