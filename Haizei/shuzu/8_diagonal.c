#include <stdio.h>

/*
	海贼理工学院的老师让同学们排成了一个n*n的方阵。
	好奇的你想知道这个方阵的对角线上的同学的身高都是怎么样的。
	现已知所有同学的身高，数值为整数，单位：厘米。
	要求输出所有对角线上（自左向右、自上 向下编号时行列编号相同）的同学的身高。
*/

void diagonal(int *p,int n);

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n][n];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
		
	diagonal(&arr[0][0],n);
	
}

void diagonal(int *p,int n)
{
	int i = 0;
	int (*q)[n];
	q = (typeof(q))p;
	while(n-->0)
	{
		printf("%d\n",q[i][i]);
		i++;
	}
}