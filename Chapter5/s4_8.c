/***** s4_8.c *****/
#include <stdio.h>
main()
{
    /*********found*********/
    int x, sum = 0, count = 0;
    printf("Enter a integer:");
    scanf("%d", &x);
    while (x)
    {
        sum = sum + x % 10;
        /*********found*********/
        x /= 10;
        count++;
    }
    printf("count=%d,sum=%d\n", count, sum);
}
