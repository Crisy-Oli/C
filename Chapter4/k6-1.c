#include <stdio.h>
void main()
{
    int a, b, c, s;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2;
        printf("%d", s);
    }
}