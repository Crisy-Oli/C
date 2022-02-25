#include <stdio.h>
void main()
{
    int f[20], i;
    f[0] = f[1] = 1;
    for (i = 2; i < 20; i++)
        f[i] = f[i - 1] + f[i - 2];
    for (i = 0; i < 20; i++)
    {
        printf("%4d ", f[i]);
        if ((i + 1) % 7 == 0)
            printf("\n");
    }
}