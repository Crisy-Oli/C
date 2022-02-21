 /***** s7_4.c *****/
#include <stdio.h>
#define  PT  5.5
#define  S(x)  PT*x*x
main()
{ int a=1,b=2;
  float k;
  k=S(a+b);
  printf("%4.1f\n",k);
}
