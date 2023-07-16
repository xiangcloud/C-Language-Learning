/*************************************************************************
	> 现在有一个字符串，你需要把字符串中出现的小写字母转换成大写字母，大写字母转换成小写字母。
	> File Name: 1_Size_conversion.c
	> Author: csgec
	> Mail: 12345678@qq.com 
	> Created Time: 2023年07月15日 星期六 16时05分56秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int ch;
	while((ch=getchar())!='\n')
	{
		if(ch>='a' && ch<='z')
			printf("%c",ch-32);
		else if(ch>='A' && ch<='Z')
			printf("%c",ch+32);
		else 
			printf("%c",ch);
	}
	printf("\n");
	return 0;
}