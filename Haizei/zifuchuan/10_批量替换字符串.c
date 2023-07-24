#include <stdio.h>
#include <string.h>

char *gets(char *s);

/*
	题目描述
		在网络编程中，如果URL中含有特殊亨符
		如空格、"#等，服务器将无法识别导致无法获得正确的参数值
		我们需要将这些特殊字符转换成服务器可以识别的宁符， 例如l将空格转换成"%20'
		给定一个字符串，将其中的空格转换成"%20”。输入一个原始字符串，例他 "hello world"
		输出转换后的字符串，仍例如“hello%20word' "
*/

int main()
{
	char str[1024] = {'\0'};
	
	char s[3] = {'%','2','0'};
	
	int i = 0;
	
	while((str[i]=getchar()) != '\n')
	{
		if(str[i] == ' ')
		{
			for(int j=0;j<3;j++)
				str[i++] = s[j];
		}
		else
			i++;
	}
	str[i] = '\0';
	printf("%s\n",str);
	
	
	return 0;
}