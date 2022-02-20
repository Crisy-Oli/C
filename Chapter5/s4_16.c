#include <stdio.h>
void main()
{
    double N = 1, sum = 1, a;
    for (a = 1; 1; a++)
    {
        N *= a;
        sum += 1 / N;
        if ((1 / N) < 1e-6)
            break;
    }
    printf("%lf", sum);
}