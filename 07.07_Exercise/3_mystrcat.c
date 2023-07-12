#include <stdio.h>
#include <string.h>
/*
	strcat 将 src 中的字符拼接到 dest 字符串的第一个'\0'的位置开始往后的空间中
	
	拼接完之后，会给dest 添上结束符。

*/

char *mystrcat(char *dest, const char *str);

int main()
{
	char arr[1024] = "nihao=";
	
	char *str = "hello" ;
	
	char *str1 = mystrcat(arr, str);
	
	printf("%s\n",str1);
	
	return 0;
	
}



char *mystrcat(char *dest, const char *str)
{
   int lenth = strlen(dest);
   
   int n = strlen(str);
   
   int i;

   for (i = 0 ; i < n && str[i] != '\0'; i++)
	   dest[lenth + i] = str[i];
   dest[lenth + i] = '\0';

   return dest;
}
