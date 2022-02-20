#include <stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    switch (a % 2)
    {
    case 1:
        printf("奇数");
        break;
    case 0:
        printf("偶数");
        break;
    }
}