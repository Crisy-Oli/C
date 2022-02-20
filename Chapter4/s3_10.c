#include <stdio.h>
void main()
{
    double x, y;
    scanf("%lf", &x);
    if (x >= -5 && x < 0)
        y = x - 1;
    else if (x == 0)
        y = x;
    else if (x > 0 && x < 10)
        y = x + 1;
    printf("%f", y);
}