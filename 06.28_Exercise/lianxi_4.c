#include <stdio.h>
#define DIM(x) sizeof(x) / sizeof(x[0])
#define SWAP(x, y) (x = (y + x) - (y = x))

// int main()
// {
	// int num;
	// scanf("%d",&num);
	// if(num>=90 && num<100)
		// printf("a\n");
	// else if(num>=80 && num<90)
		// printf("b\n");
	// else if(num>=60 && num<80)
		// printf("c\n");
	// else
		// printf("d\n");
	// return 0;
// }


void SiSort(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int iMinIndex = i+1;
		int iMinValue = a[i+1];
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < iMinValue)
			{
				iMinValue = a[j];
				iMinIndex = j;
			}
		}
		if (iMinValue < a[i])
		{
			SWAP(a[i], a[iMinIndex]);
		}
	}
}
void main()
{
	int a[] = {49, 38, 65, 97, 76, 13, 27};
	SiSort(a, DIM(a));
	for (int i = 0; i < DIM(a); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\r\n");
}