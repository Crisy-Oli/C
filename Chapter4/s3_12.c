#include <stdio.h>
void main()
{
    double a;
    char x;
    scanf("%lf", &a);
    switch ((int)(a / 10))
    {
    case 10:
    case 9:
        x = 'A';
        break;
    case 8:
        x = 'B';
        break;
    case 7:
        x = 'C';
        break;
    case 6:
        x = 'D';
        break;
    default:
        x = 'E';
    }
    printf("%c", x);
}