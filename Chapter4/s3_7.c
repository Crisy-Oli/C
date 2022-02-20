/***** s3_7.c *****/
#include <stdio.h>
void main()
{
    int a, b, c, shape;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c)
            /*********found*********/
            shape = 3;
        else if (a == b || b == c || a == c)
            shape = 2;
        /*********found*********/
        else
            shape = 1;
    }
    else
        shape = 0;
    printf("%d\n", shape);
}
