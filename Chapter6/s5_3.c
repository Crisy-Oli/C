 /***** s5_3.c *****/
#include <stdio.h>
main()
{
char s[]="a good world";
int i,j;
for (i=j=0;s[i]!= '\0';i++)
if (s[i]!= 'd' ) s[j++]=s[i];
s[j]= '\0';
printf("%s\n",s);
}
