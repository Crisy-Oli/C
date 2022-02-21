#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 500; i++)
        if ((i % 7) == 0 && (i % 9) == 0)
            printf("%d ", i);
}