#include <stdio.h>
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x>y?y:x
#define NUM 5

int main()
{
	int a[NUM];
	int max,min;
	for (int i = 0;i < NUM;i++)
		scanf("%d", &a[i]);
	max = min = a[0];
	for(int i = 0;i < NUM;i++)
	{
		max = MAX(max,a[i]);
		min = MIN(min,a[i]);
	}
	printf("max = %d\nmin = %d\n",max,min);
	return 0;
}