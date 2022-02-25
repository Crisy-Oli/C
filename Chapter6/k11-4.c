#include <stdio.h>
void main()
{
    int a[100], i, j = 0;
    for (i = 200; i <= 300; i++)
        if (i % 7 == 0)
            a[j++] = i;
    for (i = 0; i < j; i++)
        printf("%d ", a[i]);
    printf("\n%d", j);
}