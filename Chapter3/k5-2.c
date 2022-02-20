#include <stdio.h>
void main()
{
    double c, f;
    scanf("%lf", &f);
    c = (f - 32) / 1.8;
    printf("%.1lf", c);
}
