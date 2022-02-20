#include <stdio.h>
main()
{
    int i = 16, j, x = 6, y, z;
    j = i++ + 1;
    printf("1:%d\n", j);
    x *= i = j;
    printf("2:%d\n", x);
    x = 1;
    y = 2;
    z = 3;
    x += y += z;
    printf("3:%d\n", z += x > y ? x++ : y++);
    x = y = z = -1;
    ++x || ++y && ++z;
    printf("5:%d,%d,%d\n", x, y, z);
}