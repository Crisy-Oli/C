#include <stdio.h>
void main()
{
    int s[6] = {88, 95, 80, 87, 82, 60}, i, sum = 0;
    for (i = 0; i < 6; i++)
        sum = sum + s[i];
    printf("%f\n", sum / 6.0);
}
