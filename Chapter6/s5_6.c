/***** s5_6.c*****/
#include <stdio.h>
main()
{
int a[100];
int k,i,j=   1    ;
printf("\n please input k:");
scanf("%d",&k);
for (   2    ;i<=k;i++)
  if (k%i==0    3    i%2==0)
a[j++]= i;
printf("\n");
for (i=    4    ;i>=0;i--)
  printf("%d  ",a[i]);
printf("\n");
}

