/***** s5_7.c*****/
#include <stdio.h>
#define M 4
#define N 3
main()
{
int a[M][N]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int sum=0,i,j;
for (i=0;i<N;i++)
 sum+=a[0][i]+   1   ;
for (j=1;j<M-1;j++)
 sum+=a[j][0]+   2   ;
printf("%d\n",sum);
}
