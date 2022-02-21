 /***** s7_7.c *****/
#include <stdio.h>
#define  PR(a)  printf("%d\t",(a))
#define  PRINT(a)  PR(a); printf("ok!")
main()
{ 
int a=1,i;
for (i=0; i<3; i++)
PRINT(a+i);
printf("\n");
}
