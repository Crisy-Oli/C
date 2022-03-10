#include <stdio.h>
void main()
{
    int x, a[100], i = 0;
    scanf("%d", &x);
    while (x)
    {
        a[i++] = x % 2;
        x = x / 2;
    }
    for (i--; i >= 0; i--)
        printf("%d", a[i]);
}