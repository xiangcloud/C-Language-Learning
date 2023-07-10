#include <stdio.h>

int max_Common_number(int a,int b);


int main()
{
	int a,b,max_num;
	scanf("%d%d",&a,&b);
	max_num = max_Common_number(a,b);
	printf("%d",max_num);
	return 0;
}


int max_Common_number(int a,int b)
{
	int temp;
	while(temp = a%b)
	{
		a = b;
		b = temp;
	}
	return b;
}