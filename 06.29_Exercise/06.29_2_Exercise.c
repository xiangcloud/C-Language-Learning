#include <stdio.h>

int main()
{
	int num,n,t;
	scanf("%d %d",&num,&n);
	t = num;
	while(n-- != 1)
	{
		num * = t
	}
	printf("%d\n",num);
	return 0;
}