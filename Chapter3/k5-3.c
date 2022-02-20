#include <stdio.h>
void main()
{
    int s, m, h;
    scanf("%d", &s);
    m = s / 60 % 60;
    h = s / 3600;
    s = s - m * 60 - h * 3600;
    printf("%d小时%d分%d秒", h, m, s);
}