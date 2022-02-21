/***** s6_3.c *****/
#include<stdio.h>
int fun2( int x , int y ) 
{
return ( x / y ) ;
}
int fun1( int x, int y )
{
int c1, c2 ; 
c1=fun2(x,y) ;
c2=fun2(y,x) ;
return (c1+c2);
}
main()
{
int  a=12, b=5;
printf("%d\n", fun1(a,b));
}
