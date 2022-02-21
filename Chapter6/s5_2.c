/***** s5_2.c *****/
#include <stdio.h>
#include <string.h>
main()
{
 char  a[20]="Good\t\\\0China";
 int i,j;
 i=sizeof(a);
 j=strlen(a);
 printf("%d,%d\n",i,j);
}
