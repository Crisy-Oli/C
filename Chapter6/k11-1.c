#include <stdio.h>
// Tips：数组名代表数组的首地址
void main()
{
    double x[6], s = 0, p;
    int i;
    for (i = 0; i < 6; i++)
        scanf("%lf", x + i);
    for (i = 0; i < 6; i++)
        s = s + x[i];
    p = s / 6;
    printf("%f,%f", s, p);
}