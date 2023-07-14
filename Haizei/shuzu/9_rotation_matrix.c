#include <stdio.h>

/*
	给出一个 n∗m的整数矩阵，将这个矩阵顺时针旋转 90°后输出
*/

void rotation_matrix(int row,int col,int *p);


int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	
	int arr[row][col];
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			scanf("%d",&arr[i][j]);
		
	rotation_matrix(row,col,&arr[0][0]);
	
	return 0;
}
// 1 2 3 4
// 2 3 4 5
// 4 5 6 7

void rotation_matrix(int row,int col,int *p)
{
	int (*q)[col];
	q = (typeof(q))p;
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
			if(j<row-1)
				printf("%d ",q[row-j-1][i]);
			else
				printf("%d",q[row-j-1][i]);
		printf("\n");
	}	
	
}