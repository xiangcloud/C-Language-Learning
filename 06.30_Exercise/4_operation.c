#include <stdio.h>
//插入排序
int main()
{
	int arr[5] = { 4,2,75,12,43 };
	int i, j, temp;
	
	for (i = 1;i < 5;i++)
	{
		temp = arr[i];
		if (arr[i] < arr[i - 1])
		{
			for (j = i - 1;temp < arr[j];j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}	}
	for (int k = 0;k < 5;k++)
		printf("%d\t", arr[k]);
	return 0;
}