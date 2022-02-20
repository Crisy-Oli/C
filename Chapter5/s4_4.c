/***** s4_4.c*****/
#include <stdio.h>
main()
{
    int i, s, n;
    s = 1;
    n = 5;
    for (i = 1; i <= n; i++)
        s *= i;
    printf("%d!=%d\n", n, s);
}
