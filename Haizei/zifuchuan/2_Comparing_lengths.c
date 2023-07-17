/*************************************************************************
	> 输入一个整数n,输入n个字符串，输出最长的那个字符串
	> File Name: 2_Comparing_lengths.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月15日 星期六 16时17分41秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{	
	int n;
	scanf("%d",&n);
	
	char str[n][100];
	

	for(int i=0;i<n;i++)
		scanf("%s",&str[i][0]);
	
	int index = 0,max;
	
	max = strlen(str[0]);
	
	for(int i=0;i<n;i++)
	{
		if(max < strlen(str[i]))
		{
			max = strlen(str[i]);
			index = i;
		}
		
	}
	
	
	printf("%s\n",str[index]);
	
	
	
}




