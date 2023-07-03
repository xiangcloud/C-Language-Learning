#include <stdio.h>

int main()
{
	int arr[3][3] = {0};
	int max = -99999,min = 999999;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
			if(max < arr[i][j])
				max = arr[i][j];
			if(min>arr[i][j])
				min = arr[i][j];
		}
	}
	printf("max = %d\tmin = %d\n",max,min);
	return 0;
}