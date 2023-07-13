#include <stdio.h>
#include <string.h>
/*
	给你一个数组 nums 和一个值 val，
	你需要 原地 移除所有数值等于 val 的元素，
	并返回移除后数组的新长度。
*/
int removeElement(int* nums, int numsSize, int val);

int main()
{
	
	int arr[6] = {1,2,3,4,5,6};
	
	
	int a;
	
	
	scanf("%d",&a);
	
	
	int n = removeElement(arr,6,a);
	
	for(int i=0;i<n;i++)
		printf("%d  ",arr[i]);
	
	return 0;
	
}



int removeElement(int* nums, int numsSize, int val)
{

	int count = 0;
	
	int *p = nums;
	
	 
	for(int i=0;i<numsSize;i++)
	{
		
		if( p[i] != val )
		{
			*(nums++) = p[i];
			count++;
		}
	}
	
	
	return count;
	
}