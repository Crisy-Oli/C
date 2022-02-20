#include <stdio.h>
void main()
{
    char a;
    a = getchar();
    if (a >= 'a' && a <= 'z')
    {
        if (a <= 'a' + 13)
            putchar(a + 1);
        else
            putchar(a - 1);
    }
}