/***** s4_9.c *****/
#include<stdio.h>
main()
{
int i,j,k;
/*********found*********/
for(i=1;i<4;i++)
 {
for(j=1;j<=10-i;j++)
printf("  ");
/*********found*********/
for(k=1;k<i;k++) 
printf("%4d",i);
printf("\n"); 
 }
}

