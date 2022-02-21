/***** s5_8.c *****/
#include <stdio.h>
main()
{
int i,x,n;
/**********found**********/
int a[n];
printf("输入数组元素的个数：");
scanf("%d",&n);
printf("输入数组的%d个元素：",n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("输入x：");
scanf("%d",&x]);
for (i=0;i<n;i++)
/**********found**********/
if (a[i]!=x) break;;
/**********found**********/
if (i!=n)
printf("未找到与%d相同的元素！\n",x);
else 
printf("和%d相同的数组元素是a[%d]=%d\n",x,i,a[i]);
}

