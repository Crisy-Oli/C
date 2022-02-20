#include <stdio.h>
void main()
{
    float score;
    scanf("%f", &score);
    if (score >= 95)
        printf("成绩为A");
    if (score <= 94 && score >= 85)
        printf("成绩为B");
    if (score <= 84 && score >= 70)
        printf("成绩为C");
    if (score <= 69 && score >= 60)
        printf("成绩为D");
    if (score <= 60)
        printf("成绩为E");
}