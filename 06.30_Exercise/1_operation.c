#include <stdio.h>
#define DIM(x) sizeof(x) / sizeof(x[0])

int main()
{
	int a[9] = {0};

	for (int i = 0;i < DIM(a);i++)
		scanf("%d", &a[i]);

	for (int i = 0;i<(DIM(a)/2);i++)
	{
		int temp = a[i];
		a[i] = a[DIM(a) - 1 - i];
		a[DIM(a) - 1 - i] = temp;
	}

	for (int i = 0;i <DIM(a);i++)
		printf("%d\t", a[i]);

	return 0;
}