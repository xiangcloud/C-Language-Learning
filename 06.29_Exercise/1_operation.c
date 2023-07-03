#include <stdio.h>

int main()
{
	int a,b,t,k=0;
	scanf("%d%d",&a,&b);
	t = a;
	for(int i=0;i<b;i++)
	{
		k += t;
		t = t*10+a;
	}
	printf("%d",k);
	return 0;
}