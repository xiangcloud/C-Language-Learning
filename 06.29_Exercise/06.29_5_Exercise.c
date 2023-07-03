#include <stdio.h>



int main()
{
	int a,flag = 1;
	scanf("%d",&a);
	for(int i=2;i<a/2;i++)
	{
		if(a % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if(flag != 0)
		printf("is zhishu\n");
	else 
		printf("no zhishu\n");
	return 0;
}

