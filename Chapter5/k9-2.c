// 1000以内的水仙花数
//求所有的“水仙花数”之和，所谓“水仙花数”是指一个3位数，其各位数字立方之和等于该数本身。（k9-2.c）
#include <stdio.h>
void main()
{
    int x, a, b, c, sum = 0;
    for (x = 100; x <= 999; x++)
    {
        a = x / 100;
        b = (x / 10) % 10;
        c = x % 10;
        if (x == a * a * a + b * b * b + c * c * c)
            sum = sum + x;
    }
    printf("%d", sum);
}