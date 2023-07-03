#include <stdio.h>
#define NUM 5
int main()
{
	int a[NUM];
	int sum = 0;
	for(int i=0;i<NUM;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("sum = %d\n",sum);
	return 0;
}