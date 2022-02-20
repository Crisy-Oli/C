/***** s4_2.c *****/
#include <stdio.h>
main()
{
    int i;
    for (i = 1; i < 6; i++)
    {
        if (i % 2)
            printf("#");
        else
            continue;
        printf("*");
    }
    printf("\n");
}
