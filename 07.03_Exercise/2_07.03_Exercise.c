#include <stdio.h>


int main()
{
	int i,j;
	int arr[10][10] = {0};
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}