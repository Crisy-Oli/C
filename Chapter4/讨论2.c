#include <stdio.h>
void main()
{
    char op;
    float data1, data2;
    printf("请输入两个数字\n");
    scanf("%f%c%f", &data1, &op, &data2);
    switch (op)
    {
    case '+':
        printf("%f%c%f=%f", data1, op, data2, data1 + data2);
        break;
    case '-':
        printf("%f%c%f=%f", data1, op, data2, data1 - data2);
        break;
    case '*':
        printf("%f%c%f=%f", data1, op, data2, data1 * data2);
        break;
    case '/':
        printf("%f%c%f=%f", data1, op, data2, data1 / data2);
        break;
    }
}