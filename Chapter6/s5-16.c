#include <stdio.h>
void main()
{
    int a[100], i, j, p = 0;
    for (i = 200; i <= 300; i++)
    {
        for (j = 2; j < i; j++)
            if (i % j == 0)
                break;
        if (j >= i)
            a[p++] = i;
    }
    for (i = 0; i < p; i++)
    {
        printf("%3d ", a[i]);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }
}