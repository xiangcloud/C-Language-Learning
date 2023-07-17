/*************************************************************************
	>输入
			一个正整数N,之后输入N行字符串
	输出
			将N行字符串转换为首字母大写后面字母小写的格式，并且按照字母排序'A'-'Z'
	> File Name: 4_transform.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月17日 星期一 18时41分28秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	char ch[n][100];
	for(int i=0;i<n;i++)
		scanf("%s",&ch[i][0]);
	
	for(int i=0;i<n;i++)
	{
		if(ch[i][0] >= 'a' && ch[i][0] <= 'z')
			ch[i][0] = ch[i][0] - 32 ;
		for(int j=1;j<=strlen(ch[i]);j++)
		{
			if(ch[i][j] >= 'A' && ch[i][j] <= 'Z')
				ch[i][j] = ch[i][j] + 32 ;	
		}
	}

	
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(strcmp(ch[j],ch[j+1])>0)
			{
				char temp[100];
				strcpy(temp,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],temp);
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
		printf("%s\n",ch[i]);
	
	
	return 0;
}



