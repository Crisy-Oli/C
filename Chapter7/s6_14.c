/***** s6_14.c *****/
#include <stdio.h>
#include <string.h>
long fun(int a, int n)
{







}
main()
{
int a,n,i;
long s=0;
printf("\n please input a: ");
scanf("%d",&a);
printf("\n please input n: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
s=s+fun(a,i);
printf("Sn=%ld\n ",s);
}
