#include <stdio.h>
#define ROW  3
#define COL  3
int main()
{
	int arr[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	int count = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if((   i==0 || arr[i][j]>arr[i][j-1])
				&&(i==2 || arr[i][j]>arr[i][j+1])
				&&(j==0 || arr[i][j]>arr[i-1][j]) 
				&&(j==2 || arr[i][j]>arr[i+1][j]))
				{
					printf("%d是山顶元素\n",arr[i][j]);
					count++;
				}
		}
	}
	printf("%d个山顶元素",count);
	return 0;
}