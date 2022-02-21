/***** s6_6.c *****/
#include <stdio.h>
int fun(int x)
{
int i,j,count=0;
printf("\nThe prime number %d\n",x);
for(i=2;i<=x;i++)
{
/*****found*****/
for(   1   ;j<i;j++)
/*****found*****/
if(   2   %j==0)
break;
/*****found*****/
if(   3   >=i)
{
count++;
printf(count%15 ? "%5d" : "\n%5d",i);
}
}
return count;
}
main()
{
int x=20,result;
result=fun(x);
printf("\nThe number is %d\n",result);
}

