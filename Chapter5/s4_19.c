#include <stdio.h>
void main()
{
    int i, j, N = 4;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
            printf(" ");
        for (j = 0; j < 1 + 2 * i; j++)
            printf("A");
        printf("\n");
    }
}