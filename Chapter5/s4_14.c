#include <stdio.h>
void main()
{
    int x, a, b, c;
    for (x = 200; x <= 300; x++)
    {
        a = x / 100;
        b = x / 10 % 10;
        c = x % 10;
        if (a * b * c == 42 && a + b + c == 12)
            printf("%d ", x);
    }
}