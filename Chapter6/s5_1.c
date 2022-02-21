/***** s5_1.c *****/
#include <stdio.h>
main()
{ 
 int a[]={1,2,3,4},i,j,s=0;
 j=1;
 for (i=3;i>=0;i--)
 {
 s=s+a[i]*j;
  j=j*10; 
}
 printf("s=%d\n",s);
}
