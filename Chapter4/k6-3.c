#include <stdio.h>
void main()
{
    int a;
    a = getchar();
    if (a > '0' && a < '9')
        putchar(a);
    else
        printf("-1");
}