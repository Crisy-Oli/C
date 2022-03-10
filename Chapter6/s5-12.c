/*输入10个整数存入一维数组，找出最小的数，将最小数和数组中最前面的元素对换位置后输出。(s5-12.c)
提示：找最小值及最小值所在元素的下标，将其与最前面的元素交换。*/
#include <stdio.h>
void main()
{
    int a[10], i, min;
    for (i = 0; i < 10; i++)
        scanf("%d", a + i);
    min = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[min] > a[i])
            min = i;
    }
    if (min)
    {
        i = a[min];
        a[min] = a[0];
        a[0] = i;
    }

    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
}