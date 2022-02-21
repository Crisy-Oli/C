/***** s6_12.c*****/
#include<stdio.h>
long fun(int n)
{








}
main()
{
int i,n;
long s=0;
printf("please input n: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
s=s+fun(i);
printf("s=%ld\n",s);
}

