#include <stdio.h>

int Bubble_func(int a[],int n);

int main()
{
	
	int arr[10] = {13,23,53,23,63,10,3,5,2,90};
	
	Bubble_func(arr,10);
	
	for(int i=0;i<10;i++)
		printf("%d\t",arr[i]);
	
	return 0;
	
}

int Bubble_func(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]   = a[j]^a[j+1];
				a[j+1] = a[j]^a[j+1];
				a[j]   = a[j]^a[j+1];
			}
		}
	}
	return 0;
}