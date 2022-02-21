/***** s6_4.c *****/
#include<stdio.h>
int a=1,j=2;
void func()
{
int i=5;
printf("a=%d,i=%d\n" ,a,--i);
i++;
a++;
if(a<4) 
func();
a--;
j+=3;
printf("a=%d,j=%d\n" ,a,j);
}
main()
{
int i=2;
func();
printf("a=%d, i=%d, j=%d\n" ,a,i,j);
}
