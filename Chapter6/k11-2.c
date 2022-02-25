#include <stdio.h>
void main()
{
    double x[5] = {8.6,
                   6.8,
                   5.6,
                   4.9,
                   1.1},
           t;
    int i;
    for (i = 0; i < 5 / 2; i++)
    {
        t = x[i];
        x[i] = x[4 - i];
        x[4 - i] = t;
    }
    for (i = 0; i < 5; i++)
        printf("%.1f,", x[i]);
}