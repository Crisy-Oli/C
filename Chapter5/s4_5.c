/***** s4_5.c*****/
#include <stdio.h>
main()
{
  int i, sum;
  sum = 0;
  for (i = 1; i <= 50; i++)
    if (i % 7 == 0)
      sum += i;
  printf(" sum=%d\n", sum);
}
