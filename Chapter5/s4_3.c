/***** s4_3.c*****/
#include <stdio.h>
main()
{
  int i, j, s = 0;
  for (i = 1; i <= 12; i += 3)
    for (j = 3; j <= 19; j += 4)
      s++;
  printf("s=%d\n", s);
}
