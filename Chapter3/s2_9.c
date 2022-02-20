#include <stdio.h>
main()
{
    int a, b, c, d, e, f;
    scanf("%d%d%d", &a, &b, &c);
    d = (a > b) ? a : b;
    e = (a > c) ? a : c;
    f = (d > e) ? d : e;
    printf("%d", f);
}