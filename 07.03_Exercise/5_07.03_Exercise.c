#include <stdio.h>

int main()
{
	int arr[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i==0 || j==0)
			{
				arr[i][j] = 1;
			}
			else 
			{
				arr[i][j] = arr[i][j-1]+arr[i-1][j];
			}
		}
	}
	printf("%d\n",arr[3][3]);
	return 0;
}