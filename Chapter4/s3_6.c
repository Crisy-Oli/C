/***** s3_6.c *****/
#include <stdio.h>
void main()
{
    int x;
    scanf("%d", &x);
    /*********found*********/
    if (x % 400 == 0)
        printf("Yes.\n");
    else
        /*********found*********/
        if (x % 4 == 0 && x % 100 != 0)
            printf("Yes.\n");
        else
            printf("No.\n");
}
