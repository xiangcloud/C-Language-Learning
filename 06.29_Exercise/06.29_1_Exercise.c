#include <stdio.h>

int main()
{
	int i = 100,sum = 0;
	while(i<200)
	{
		sum += (i % 2 != 0)?0:i;
		i++;
	}
	printf("Even number and:%d\n",sum);
	return 0;
}