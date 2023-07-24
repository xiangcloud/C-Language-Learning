#include <stdio.h>
#include <string.h>

/*
题目描述
	从键盘输入任意的一个字符串A，其长度不小于6
		同时再输入一个整数Y(其中:K<L)作为插入点，以及任意的一个字符串
		其长度为，(其中:  <L)，现要求完成下列功能:
	1.如果字符串A的长度L大于100输出100，否则输出L 
	
	2.在N点处，插入字符串B后，将得到一个新字符串c
		请计算并输出最后的字符串;3.查找字符串c中，从右到左第一个出现字母x的位置。
*/



int main()
{
	char a[1024] = {'\0'};
	scanf("%s",a);
	if(strlen(a)>100)
		printf("100\n");
	else
		printf("%ld\n",strlen(a));
	
	int n;
	scanf("%d",&n);
	
	char b[1024] = {'\0'};
	scanf("%s",b);
	
	strcat(b,&a[n-1]);
	strcpy(&a[n-1],b);
	
	printf("%s\n",a);
	n = strlen(a)-1;
	int j = 1;
	do
	{
		if(a[n--] == 'x')
			break;
	}while(j++);
	
	printf("%d\n",j);
	
	return 0;
	
	
	
}