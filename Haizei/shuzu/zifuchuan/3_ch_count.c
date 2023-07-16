/*************************************************************************
	> 输入一行字符，分别统计出其中英文字母，数字，空格，其它字符的个数。
	> File Name: 3_ch_count.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月16日 星期日 20时41分39秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int ch_count=0,num_count=0,other_coutn=0,space_count=0;
	
	int ch;
	
	while( (ch=getchar()) != '\n')
	{
		if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
			ch_count++;
		else if(ch>='0'&&ch<='9')
			num_count++;
		else if(ch == ' ')
			space_count++;
		else
			other_coutn++;
	}
	
	printf("%d %d %d %d\n",ch_count,num_count,space_count,other_coutn);
	
	return 0;
}