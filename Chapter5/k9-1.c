//找出100 ~200之间所有不能被3整除的数（每行显示5个）。（k9 - 1.c）
#include <stdio.h>
void main()
{
    int i, j = 0;
    for (i = 100; i <= 200; i++)
        if (i % 3 != 0)
        {
            printf("%3d ", i);
            j++;
            if (j % 5 == 0)
                printf("\n");
        }
}