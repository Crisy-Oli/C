#include <stdio.h>
int a, b, n, s = 36;
double c;
f1()
{
    for (a = 0; a <= 36; a++)
        for (b = 0; b <= 36; b++)
            for (c = 0; c <= 36; c++)
                if (s == a + b + c && n == a * 4 + b * 3 + c / 2)
                    printf("men=%d,women=%d,children=%.0f\n", a, b, c);
}

void main()
{
    printf("27<n<=77:\n");
    scanf("%d", &n);
    f1();
}