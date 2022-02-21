/***** s4_7.c*****/
#include <stdio.h>
main()
{
   float h;
   int count = 0;
   scanf("%f", &h);
   do
   {
      h = h * 3 / 4;
      count++;
   } while (h >= 1);
   printf("count=%d\n", count);
}
