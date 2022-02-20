#include <stdio.h>
main()
{
    int m;
    scanf("%d", &m);
    printf("%d%d%d", m % 10, m / 10 % 10, m / 100);
}