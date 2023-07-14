/*************************************************************************
	> File Name: 7_school_tree.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月13日 星期四 23时03分49秒
 ************************************************************************/

/*输入一个数，代表从0到这个数的数轴 ，在输入m个区域 ，每个区域输入一个区间，在数轴上去除这些区间，返回所剩的数*/

#include<stdio.h>
#include <string.h>

int tree(int a[][2],int max,int m);

int main()
{
	
	int max,m;
	scanf("%d %d",&max,&m);
	int arr[m][2];
	for(int i=0;i<m;i++)
	{	
		for(int j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int count = tree(arr,max,m);
	
	printf("%d\n",count);

	return 0;
}

int tree(int a[][2],int max,int m)
{
	int arr[max+1];
	int*p = memset(arr,0,sizeof(arr));
	for(int i=0;i<m;i++)
	{	
		for(int j=a[i][0];j<=a[i][1];j++)
		{
			p[j] = 1;
		
		}
		
	}
	
	int count = 0;
	for(int i=0;i<=max+1;i++)
	{
		if(arr[i] == 0 )
			count++;
	}

	return count;


}
