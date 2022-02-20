#include <stdio.h>
main()
{
    double x;
    scanf("%lf", &x);
    x = (x + 0.05) * 10;
    x = (int)x;
    x = x / 10;
    x = x - (int)x / 1;
    printf("%.1f", x);
}