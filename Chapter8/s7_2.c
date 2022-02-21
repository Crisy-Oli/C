/***** s7_2.c *****/
#include <stdio.h>
int fun(int a)
{
int b=0;
static int c=3;
b=b+1;
c=c+1;
return(a+b+c);
}
main()
{
int a=2,i;
for(i=0;i<3;i++)
  printf("%d ",fun(a));
printf("\n");
}
