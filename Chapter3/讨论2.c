#include <stdio.h>
void main()
{
    int a, b;
    a = 15;
    b = -9;
    printf("%d+(%d)=%f\n", a, b, (float)a + b);
    printf("%d-(%d)=%f\n", a, b, (float)a - b);
    printf("%d*(%d)=%f\n", a, b, (float)a * b);
    printf("%d/(%d)=%f\n", a, b, (float)a / b);
    printf("%d%%(%d)=%d\n", a, b, a % b);
}