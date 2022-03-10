#include <stdio.h>
void main()
{
    int a[7], b[7], c[7], i;
    for (i = 0; i < 7; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 7; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 7; i++)
        c[i] = a[i] * 10 + b[i];
    for (i = 0; i < 7; i++)
        printf("%d ", c[i]);
}