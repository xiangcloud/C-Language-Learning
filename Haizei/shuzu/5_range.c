/*************************************************************************
	> File Name: 5_range.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月13日 星期四 17时04分35秒
 ************************************************************************/

/*输入一个数组A,判断他是不是山脉数组，是的话返回ture否则返回false*/


#include<stdio.h>


int range(int *a,int Asize);

int main()
{

	int arr[5] = {1,3,1,2,1};

	int bol = range(arr,5);

	if(bol)
		printf("true\n");
	else
		printf("false\n");

	return 0;
}

int range(int *a,int Asize)
{
	int up = 0;
	
	int down = 0;

	for(int i=0;i<Asize-1;i++)
	{
		if(a[i+1]>a[i]&&down==0)
			up++;
		else if(a[i+1]<=a[i]&(up>0))
			down++;	
	}

	if((up+down==Asize-1)&&(up<Asize-1&&up>0)&&(down>0&&down<Asize-1))
		return 1;
	return 0;

}
