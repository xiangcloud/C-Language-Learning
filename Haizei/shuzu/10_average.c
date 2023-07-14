#include <stdio.h>

/*
	海贼工学院的老师让同学们排成了一个 n∗m的长方形队
	老师想知道现在每行同学的 身高平均数是多少，你可以帮他求一下吗。​
	现已知所有同学的身高，数值为整数，单位：厘米。
	要求输出每一行同学们身高的平均数
*/

void average(int *p,int row,int col);

int main()
{
	int n,m;
	
	scanf("%d %d",&n,&m);
	
	int arr[n][m];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&arr[i][j]);
	
	average(&arr[0][0],n,m);
	
	return 0;
}



void average(int *p,int row,int col)
{
	int (*q)[col];
	q = (typeof(q))p;
	
	
	for(int i=0;i<row;i++)
	{
		int sum = 0;
		for(int j=0;j<col;j++)
		{
			sum += q[i][j];	
		}
		printf("%.6f\n",(double)sum/col);
		
	}

}
