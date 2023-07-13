#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n+1];
	for(int i=0;i<=n;i++)
		scanf("%d",&arr[i]);
	
	for(int i=0;i<n;i++)
	{
		if(arr[i] == arr[n])
		{
			printf("%d\n",i+1);
			return 0;
		}
	}
	printf("0\n");
}