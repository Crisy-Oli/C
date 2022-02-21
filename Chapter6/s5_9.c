/***** s5_9.c *****/
#include <stdio.h>
main()
{
char s[80];
/**********found**********/
int i,j;
printf("enter string:");
gets(s);
for (i=0;s[i]!= '\0';i++)
  if (s[i]>= '0' && s[i]<= '9' )
/**********found**********/
s[j]=s[i];
/**********found**********/
  s[j]= "\0";
printf("\n new string:%s\n",s);
}

