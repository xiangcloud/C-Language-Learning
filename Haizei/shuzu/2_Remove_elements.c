#include <stdio.h>
#include <string.h>
/*
	����һ������ nums ��һ��ֵ val��
	����Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ�
	�������Ƴ���������³��ȡ�
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