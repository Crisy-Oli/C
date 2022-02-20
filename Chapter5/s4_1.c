/***** s4_1.c *****/
#include <stdio.h>
main()
{
    int x;
    x = -1;
    do
    {
        x = x * x;
    } while (!x);
    printf("x=%d\n", x);
}
