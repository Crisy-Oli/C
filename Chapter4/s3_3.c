#include <stdio.h>
void main()
{
    int x = 1, y = 0;
    switch (x)
    {
    case 1:
        switch (y)
        {
        case 0:
            printf("first\n");
            break;
        case 1:
            printf("second\n");
            break;
        case 2:
            printf("third");
            break;
        }
    }
}