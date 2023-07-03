#include <stdio.h>

void main()
{
	int a[5] = { 112,31,321,42,-1 };
	for (int i = 0;i < 4;i++)
	{
		int maxvalue = a[i + 1];
		int maxdex = i + 1;
		for (int j = i + 1;j < 5;j++)
		{
			if (a[j] > maxvalue)
			{
				maxvalue = a[j];
				maxdex = j;
			}
		}
		if (a[i] < maxvalue)
		{
			a[i] = a[i] ^ a[maxdex];
			a[maxdex] = a[i] ^ a[maxdex];
			a[i] = a[i] ^ a[maxdex];
		}
	}
	for (int i = 0;i < 5;i++)
		printf("%d\t", a[i]);

}