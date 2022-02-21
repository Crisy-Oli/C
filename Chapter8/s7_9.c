/***** s7_9.c *****/
#include<stdio.h>
#define MAXLINE 100
#define EOF -1
#define YES 1
#define NO 0
int htoi();
main()
{
int c,i,isdigit;
char t[MAXLINE];
i=0;
isdigit=     1    ;
while((c=     2    )!=EOF &&  i<MAXLINE-1)
{ if (c>='0' &&c<='9' ||c>='a' && c<='f' || c>='A' && c<='F')
{ 
isdigit=YES;
t[i++]=     3    ; 
}
else 
if (isdigit==YES)
{
isdigit=    4    ;
t[i]=    5    ;
printf("%d" ,    6     );
i=0; 
}
}
}
int htoi(char     7     )
{
int i,n;
n=0;
for (i=0;s[i]!= '\0';i++)
{
if (s[i]>= '0' && s[i]<='9')  n=n*16+s[i]-    8   ;
if (s[i]>= 'a' && s[i]<='f')  n=n*16+s[i]-    9   ;
if (s[i]>= 'A' && s[i]<='F')  n=n*16+s[i]-    10   ; 
}
return(n);
}

