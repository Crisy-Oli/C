 /***** s5_4.c *****/
#include <stdio.h>
main()
{
 int fib[12],i;
 fib[0]=0;
 fib[1]=1;
 for (i=2;i<12;i++)
   fib[i]=fib[i-1]+fib[i-2];
 for (i=0;i<12;i++)
   printf("%6d",fib[i]);
 printf("\n");
}
