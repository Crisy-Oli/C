/***** s4_6.c*****/
#include <stdio.h>
main()
{
    int i, n;
    long s = 0, t = 1;
    printf(" \n input n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t = t * i;
        s = s + t;
    }
    printf("1!+2!+3!+...+%d!=%d\n", n, s);
}
