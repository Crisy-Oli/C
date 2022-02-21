/***** s6_5.c *****/
#include <stdio.h>
#define N 100
int fun(int bb[])
{
int i,j=0;
for (   1    ; i<100;i++)
if ((i%2!=0&&i%5==0)||(i%2==0&&i%5!=0))
   2    ;
return j;
}
main()
{
int i,n;
int bb[N];
n=fun(bb);
for (i=0;i<n;i++)
{
if (i%10==0)
printf("\n");
printf("%4d",bb[i]);
}
} 

