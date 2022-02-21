/***** s6_15.c *****/
#include <stdio.h>
#include <string.h>
int letters=0,space=0,digit=0,others=0;
void countch(char str[], int n)
{







}
main()
{
int i;
char s[30];
printf("\nplease input some characters\n");
for (i=0;s[i]=getchar(),s[i]!='\n';i++);
countch(s,i);
printf("char=%d space=%d digit=%d others=%d\n",letters,space,digit,others);
}

