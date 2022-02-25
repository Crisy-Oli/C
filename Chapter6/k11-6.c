#include <stdio.h>
void main()
{
    int a[100], i, j, p, k = 0;
    for (i = 1; i <= 1000; i++)
    {
        for (j = 1, p = 0; j < i; j++)
            if (i % j == 0)
                p = p + j;
        if (p == i)
            a[k++] = i;
    }
    for (i = 0; i < k; i++)
        printf("%d ", a[i]);
    printf("\n%d", k);
}