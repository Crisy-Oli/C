//从键盘上输入10个整数存入一维数组中，对该数组用冒泡法进行排序（降序），输出排序后的结果。(s5-15.c)
#include <stdio.h>
void main()
{
    int a[10], i, j, t;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (j = 1; j <= 9; j++)
    {
        for (i = 0; i < 10 - j; i++)
            if (a[i] < a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
    }
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
}