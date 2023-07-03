#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("max = %d\n",a);
	else
		printf("max = %d\n",b);	
	return 0;
}