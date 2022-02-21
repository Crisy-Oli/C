/***** s7_5.c *****/
#include <stdio.h>
#define  MIN(x,y)  (x)<(y)?(x):(y)
main()
{
int i=10,j=15,k;
k=10*MIN(i,j);
printf("%d\n",k);
}
