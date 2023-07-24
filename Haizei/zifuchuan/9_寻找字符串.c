#include <stdio.h>
#include <string.h>
/*
	题目描述
		某天，路飞和女帝在公园里散步，走着走着
			我的天!他们各自都捡到了一串漂亮的字符串
			然而路飞好奇心比较重，他想知道自己的字符串在女帝的字符串中出现了多少次
		例伽如女帝的字符串为abababa，路飞的字符串为aba
			那么路飞的字符串在女帝的字符串中出现了3次。路飞一向比较制娇乔
			于是向你请教，你可以帮帮他么?
*/

int main()
{
	char nvdi[1024] = {'\0'};
	scanf("%s",nvdi);
	
	char lufei[1024] = {'\0'};
	scanf("%s",lufei);
	
	int count = 0,n = strlen(nvdi);
	for(int i=0;i<n;i++)
	{
		int j = strncmp(&nvdi[i],lufei,strlen(lufei));
		if( j == 0 )
			count++;
		
	}
	
	printf("%d\n",count);
	
	return 0;
}

