/***** s2_6.c *****/
#include <stdio.h>
main()
{
    int a, b, c;
    printf("Input  a, b: ");
    /**********found**********/
    scanf("%2d%2d", &a, &b);
    c = a % 10 * 1000 + a / 10 * 10 + b % 10 + b / 10 * 100;
    /**********found**********/
    printf("a=%d,b=%d,c=%d\n", a, b, c);
}
