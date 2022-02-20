#include <stdio.h>
void main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    if (a + b > 100)
        printf("%d", (a + b) / 100);
    else
        printf("%d", a + b);
}