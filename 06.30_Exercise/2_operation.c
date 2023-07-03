#include <stdio.h>
#define DIM(x) sizeof(x) / sizeof(x[0])
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[6] = { 11,12,13,14,15,17 };
	int c[DIM(a) + DIM(b)] = { 0 };
	int i = 0, j = 0, cnt = 0;
	while (i < DIM(a) && j < DIM(b))
	{
		if (a[i] > b[j])
		{
			c[cnt++] = b[j++];
		}
		else
			c[cnt++] = a[i++];
	}
	while (i < DIM(a)) c[cnt++] = a[i++];
	while (j < DIM(b)) c[cnt++] = b[j++];

	for (int i = 0;i < DIM(c);i++)
		printf("%d\t", c[i]);
	return 0;
}