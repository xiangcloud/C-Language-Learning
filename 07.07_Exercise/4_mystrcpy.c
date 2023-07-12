#include <stdio.h>
#define NUM 1024


/*
	strcpy 拷贝src中的字符串包括结束符'\0' 
	到 dest指向的空间中，注意dest的空间要求足够大
	以防止越界
*/

char *mtstrcpy(char *dest,const char *str);

int main()
{
	
	char str[NUM] = {0};
	
	char *str1 = fgets(str,NUM-1,stdin);
	
	char str2[NUM] = {0};
	
	printf("%s\n",mtstrcpy(str2,str1));
	
}


char *mtstrcpy(char *dest,const char *str)
{
	int i=0;
	
	while(*(str+i)!='\0'&&*(str+i)!='\n')
	{
		*(dest+i) = *(str+i);
		i++;
	}
	*(dest+i+1)='\0';
	return dest;
}



