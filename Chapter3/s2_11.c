#include <stdio.h>
main()
{
    double x, y;
    double a, b, c, d;
    scanf("%lf,%lf", &x, &y);
    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    printf("%.2lf,%.2lf,%.2lf,%.2lf", a, b, c, d);
}