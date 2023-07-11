#include <stdio.h>

/*
	求水洼数，有一个农场，地上坑坑洼洼的右很多的小坑，在下雨之后，小坑里面有些有水，有一些没有水

有水我们认为他是1，没有水我们认为是0，对于连着的1，我们认为是一个大水坑，我们将这个场地我们

抽象为一个二维数组，二维数组中的元素我们理解为小坑，如果数组元素值为1，表示为有水，为0表示没水

连着【上下左右】的1，表示为1个大水坑，求水坑数 

*/


int water_pools_num(int a[7][7]);

int water(int a[7][7],int i,int j);


int main()
{
	
	int arr[5][5] = {0};
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&arr[i][j]);
					
	int b[7][7] = {0};
	
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<6;j++)
			b[i][j] = arr[i-1][j-1];
	}
	
	int sum = water_pools_num(b);
	
	printf("%d\n",sum);
	
	return 0;
	
}


int water_pools_num(int a[7][7])
{
	int i,j,sum=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(a[i][j] == 1)
			{
				sum+=1;
				water(a,i,j);
			}
			
		}
	}
	return sum;
}

int water(int a[7][7],int i,int j)
{
	if(a[i][j] == 1)
	{
		a[i][j] = 0;
		water(a,i+1,j);
		water(a,i-1,j);
		water(a,i,j+1);
		water(a,i,j-1);	
	}
	return 0;
} 