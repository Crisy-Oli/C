#include <stdio.h>
void main()
{
    int u, v, temp;
    scanf("%d,%d", &u, &v);
    while (1)
    {
        temp = u % v;
        u = v;
        v = temp;
        if (v == 0)
        {
            printf("%d", u);
            break;
        }
    }
}