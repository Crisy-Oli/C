#include <stdio.h>
main()
{
    float F, c;
    scanf("%f", &F);
    c = 5 * (F - 32) / 9;
    printf("%.2f", c);
}