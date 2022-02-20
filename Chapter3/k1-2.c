#include <stdio.h>
main()
{
    double x = -8.6;
    int y = -3;
    printf("%.1lf+%d=%.1lf\n", x, y, x + y);
    printf("%.1lf-%d=%.1lf\n", x, y, x - y);
    printf("%.1lf*%d=%lf\n", x, y, x * y);
    printf("%.1lf/%d=%lf\n", x, y, x / y);
    printf("%.1lf%%%d=%d\n", x, y, (int)x % y);
}