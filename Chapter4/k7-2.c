#include <stdio.h>
void main()
{
    int x, y;
    scanf("%d", &x);
    if (x >= 10)
        y = 3 * x - 11;
    else if (x >= 0 && x < 10)
        y = 2 * x - 1;
    else if (x < 0)
        y = x;
    printf("%d", y);
}