/***** s6_2.c *****/
#include<stdio.h>
int fun(int a)
{
 return a%2; 
}
main()
{
int s[8]={1,3,5,2,4,6}, i,d=0;
for (i=0; fun(s[i]); i++)
d+=s[i];
printf(" %d\n",d);
}
