#include <stdio.h>
void main()
{
    int a[10], i, min;
    for (i = 0; i < 10; i++)
        scanf("%d", a + i);
    min = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[min] > a[i])
            min = i;
    }
    if (min)
    {
        i = a[min];
        a[min] = a[0];
        a[0] = i;
    }

    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
}