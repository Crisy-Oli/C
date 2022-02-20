#include <stdio.h>
main()
{
    float pi = 3.1415926;
    float r, h, s, v;
    printf("please input r,h:");
    scanf("%f,%f", &r, &h);
    s = pi * r * r;
    v = s * h;
    printf("area=%f,volume=%f\n", s, v);
}