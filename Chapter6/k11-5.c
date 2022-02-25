#include <stdio.h>
void main()
{
    int a[100], i, j = 0, x, y, z;
    for (i = 100; i < 1000; i++)
    {
        x = i / 100;
        y = i / 10 % 10;
        z = i % 10;

        if (i == x * x * x + y * y * y + z * z * z)
            a[j++] = i;
    }
    for (i = 0; i < j; i++)
        printf("%d ", a[i]);
    printf("\n%d", j);
}