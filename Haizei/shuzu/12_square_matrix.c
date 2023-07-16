/*************************************************************************
	> 输入一个整数n 打印一个回形方阵
	输入 
		5
	输出
		1 1 1 1 1
		1 2 2 2 1
		1 2 3 2 1
		1 2 2 2 1
		1 1 1 1 1
	> File Name: 12_square_matrix.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月15日 星期六 14时56分30秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n][n];
	
	int k = (n+1)/2;
	
	for(int i=k;i>0;i--)
		for(int j=0;j<n;j++)
		{						
			arr[i-1][j] = i;
			arr[j][i-1] = i;
			arr[n-i][j] = i;
			arr[j][n-i] = i;
		}
		
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
			if(j != n-1)
				printf("%-2d",arr[i][j]);
			else
				printf("%d",arr[i][j]);
		printf("\n");
	}
	
	return 0;
}