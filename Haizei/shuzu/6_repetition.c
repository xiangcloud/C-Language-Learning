/*************************************************************************
	> File Name: 6_repetition.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月13日 星期四 20时10分26秒
 ************************************************************************/


/*给你一个数组和一个整数K，请查找数组中有无num[i]==num[j],并且i和j相差要小于K*/




#include<stdio.h>

int main()
{
	int arr[5] = {1,2,3,1,2 };
	int k = 1;


	return 0;
}


int repetition(int *a,int k,int Asize)
{
	int index=-1,flag=0;
	for(int i=0;i<Asize;i++)
	{
		if(index != -1 && )

		if(num[i] == k)
		{
			flag = 1;
			index = i;
		}

	
	}

	return flag;
}
