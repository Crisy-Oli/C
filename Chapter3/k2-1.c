#include <stdio.h>
main()
{
    float x = 2.5, y = 8.9, z;
    z = x, x = y, y = z;
    printf("%f,%f", x, y);
}