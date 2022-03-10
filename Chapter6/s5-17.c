#include <stdio.h>
void main()
{
    int x[8] = {1111,
                2413,
                2321,
                2222,
                4245,
                3333,
                1414,
                5335},
        y[8], i, j = 0;
    for (i = 0; i < 8; i++)
    {
        if (x[i] % 10 == x[i] / 100 % 10)
            y[j++] = x[i];
    }
    for (i = 0; i < j; i++)
        printf("%d ", y[i]);
}