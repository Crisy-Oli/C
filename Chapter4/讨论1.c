#include <stdio.h>
void main()
{
    double x, y, z, t;
    scanf("%lf,%lf,%lf", &x, &y, &z);
    if (x < y)
    {
        t = x;
        x = y;
        y = t;
    }
    if (x < z)
    {
        t = x;
        x = z;
        z = t;
    }
    if (y < z)
    {
        t = x;
        y = z;
        z = t;
    }
    printf("%lf,%lf,%lf\n", x, y, z);
}