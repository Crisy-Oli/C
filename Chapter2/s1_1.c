#include <stdio.h>
void main()
{
	int i = 1, s = 0, a = 1;
	while (i <= 101)
	{
		s = s + i;
		i = (i + 2) * a;
		a = a * -1;
	}
	printf("%d\n", s);
}
