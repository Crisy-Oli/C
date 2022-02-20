#include <stdio.h>
main()
{
    double x;
    scanf("%lf", &x);
    x = (x + 0.05) * 10;
    x = (int)x;
    x = x / 10;
    printf("%lf", x);
}