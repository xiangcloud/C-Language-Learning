#include <stdio.h>

/*
	����С����Ƕ�ѧ��쳲��������У�����������һ������: 
	1��1��2��3��5��8��13��21������f����ʾ쳲��������еĵ�n��
	����:f1= f2= 1��fn = fn-1 + fn-2(n > 2)������һ��n,���fn��
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