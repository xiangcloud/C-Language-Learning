#include <stdio.h>

int main()
{
	int a,b = 1;
	scanf("%d",&a);
	while(a)
	{
		b *= a--;
	}
	printf("%d",b);
	return 0;
}