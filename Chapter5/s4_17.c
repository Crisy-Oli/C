#include <stdio.h>
void main()
{
    int a, b;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)

            printf("%2d+%2d=%2d ", a, b, a + b);
        printf("\n");
    }
}