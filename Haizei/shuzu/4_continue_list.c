#include <stdio.h>

int continue_list(int *a,int size);

/*
	����һ��δ��������������飬�ҵ���������ĵĵ������У������ظ����еĳ���
*/


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,10,9};
	
	int num = continue_list(arr,sizeof(arr)/sizeof(arr[0]));
	
	printf("max = %d\n",num);
	
	
	return 0;
}


int continue_list(int *a,int size)
{
	int i,index,max = 0;
	int count = 1;
	for(i=0;i<size-1;i++)
	{
		if((a[i+1]-a[i]) == 1)
			count++;
		else 
			count = 1;
		if(count > max)
		{
			max = count;
			index = i;
		}
	}	
	
	for(int i=index-max+2;i<=index+1;i++)
		printf("%d  ",a[i]);
	
	return max;
	
}