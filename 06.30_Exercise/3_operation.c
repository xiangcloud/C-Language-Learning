#include <stdio.h>
int main()
{
	int a[6] = { 0 };
	int b[6] = { 0 };
	int sum = 0;
	int dex1, dex2;
	
	for (int i = 0; i < 6;i++)
		scanf("%d", &a[i]);
	b[0] = a[0];
	for (int i = 1;i < 6;i++)
	{
		if (a[i] < b[i - 1] + a[i])
			b[i] = b[i - 1] + a[i];
		else
			b[i] = a[i];
	}
	int max = -99999;
	for (int i = 0;i < 6;i++)
	{
		if (b[i] > max)
			max = b[i];
	}
	for (int i = 0;i < 6;i++)
	{
		sum = 0;
		for (int j = i;j < 6;j++)
		{
			sum += a[j];
			if (sum == max)
			{
				dex1 = i;
				dex2 = j;
				break;
			}
		}
		if (sum == max)
			break;
	}
	printf("%d=", max);
	for (int i = dex1;i < dex2 + 1;i++)
	{
		if (i != dex2)
			printf("%d+", a[i]);
		else
			printf("%d", a[i]);
	}
	return 0;
}