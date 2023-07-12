#include <stdio.h>
#include <string.h>
/*
	两个字符串进行比较，如果其中某个字符不相等，则两字符串不相等，
	
	当不相等时，如果该s1的字符ASCII码值大于s2的字符，就称s1>s2
	
    如果该s1的字符ASCII码值小于s2的字符，就称s1<s2，不断比较，直至有一方为'\0'
*/

int mystrcmp(const char *str,const char *str1);

int main()
{
	char *str = "hell";
	
	char *str1 = "hello";
	
	int n = mystrcmp(str,str1);
	
	printf("%d\n",n);
	
	
}



int mystrcmp(const char *str,const char *str1)
{
	int i=0;
	
	while(*(str+i) != '\0' && *(str1+i) != '\0' &&  *(str+i) == *(str1+i) )
	{	
		i++;
	}
	
	return (*(str+i) - *(str1+i));
	
}