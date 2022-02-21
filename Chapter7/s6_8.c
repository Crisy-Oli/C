/***** s6_8.c *****/
#include<stdio.h>
int fun()
{
int a[3][3],mul;
int i,j;
/*****found*****/
mul=0;
for (i=0;i<3;i++)
{
/*****found*****/
for (i=0;j<3;j++)
  scanf("%d",&a[i][j]);
}
for (i=0;i<3;i++)
/*****found*****/
  mul=mul*a[i][j];
printf(" Mul=%d\n",mul);
}
main()
{
 fun();
}

