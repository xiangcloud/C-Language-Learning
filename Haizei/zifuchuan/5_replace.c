/*************************************************************************
	> 将No_smoking 换成 Ban_smoking 要求注意格式，首个单词才需要替换
		输入
			一个整数N,之后输入N行标识语
		输出
			转换后的单词，按照输入的顺序
	> File Name: 5_replace.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月17日 星期一 20时06分04秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
 
 
int main()
{
	int n = 0 ,i = 0;
	scanf("%d",&n);
	char str[n][1024];
	
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	
	
	for(i=0;i<n;i++)
	{
		for(int j=0;j<strlen(str[i]);j++)
		{
			char refer[1024]={"No_smoking"};
			if(str[i][j] == 'B' && (strncmp(&str[i][j],"Ban_smoking",11) == 0) )
			{
				strcat(refer,&str[i][j+11]);
				strcpy(&str[i][j],refer);
				j = j+9;
			}
		}
		
	}
	
	
	for(i=0;i<n;i++)
		printf("%s\n",str[i]);
	return 0;
	}