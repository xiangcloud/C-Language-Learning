#include <stdio.h>

int main()
{
	int num = 0, temp = 0;
	scanf("%d", &num);
	while (num)
	{
		temp = num % 10;
		num = num / 10;
		printf("%d", temp);
	}
	printf("\n");
	return 0;
}