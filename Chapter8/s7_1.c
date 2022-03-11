/***** s7_1.c *****/
#include <stdio.h>
int x = -8, y = 100;
int fun(int a)
{
    int y;
    y = x + a;
    x++;
    a++;
    return (x + y + a);
}
main()
{
    int m = 2;
    y = fun(m);
    printf("x=%d,y=%d,m=%d\n ", x, y, m);
}
