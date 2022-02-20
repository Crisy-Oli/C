#include <stdio.h>
main()
{
    int h, m = 1050;
    h = m / 60;
    m = m - h * 60;
    printf("%d小时%d分钟\n", h, m);
}