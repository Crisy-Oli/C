/***** s6_1.c *****/ 
#include<stdio.h>
void func(int a,int b)
{ 
int temp;
temp=a;
a=b;
b=temp;
}
main()
{
int a=2,b=10;
func(a,b);
printf("a=%d,b=%d\n" ,a,b);
}
