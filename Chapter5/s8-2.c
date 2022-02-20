#include <stdio.h>
void main()
{
    int n = 1, s = 0;
    while (n <= 100)
    {
        s += n * n;
        if (s > 5500)
            break;
        n++;
    }
    printf("%d", n);
}
