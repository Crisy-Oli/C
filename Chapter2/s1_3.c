#include <stdio.h>
main()
{
    int a = 4, b = 5, c = 0, d;
    d = !a && !b || !c;
    printf("d=%d\n", d);
}