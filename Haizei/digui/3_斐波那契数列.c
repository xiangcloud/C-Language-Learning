#include <stdio.h>

/*
	相信小伙伴们都学过斐波那契数列，它是这样的一个数列: 
	1，1，2，3，5，8，13，21…。用f。表示斐波那契数列的第n项
	则有:f1= f2= 1，fn = fn-1 + fn-2(n > 2)。输入一个n,求出fn。
*/
int feibo(int num);
int main()
{
	
	int num;
	
	scanf("%d",&num);
	
	printf("%d\n",feibo(num));
	
	
	return 0;
}


int feibo(int num)
{
	if(num == 1 || num == 2)
		return 1;
	else
		return feibo(num-1)+feibo(num-2);
}