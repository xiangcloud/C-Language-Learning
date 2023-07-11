#include <stdio.h>
#define SWAP(x,y) (x)=((x)+(y))-((y)=(x))
/*��������*/
void Fast_sort(int a[],int index_min,int index_max);

int median(int a[],int index_min, int index_max);

int main()
{
	int a[] = {1,5,8,0,12,436,45,2,7,42};
	
	int index_max = sizeof(a)/sizeof(a[0])-1;
	
	int index_min = 0;
	
	Fast_sort(a,index_min,index_max);
	
	for(int i=0;i<index_max+1;i++)
		printf("%d\t",a[i]);
	printf("\n");
	
	return 0;
}


int median(int a[],int index_min, int index_max)
{
	int left = index_min;
	int right = index_max;
	int key = a[index_min];
	do
	{
		//Ѱ�ұ������ֵ�������
		while(a[right]>=key && left<right)
		{
			right--;
		}
		if(left<right)
			SWAP(a[left],a[right]);
		while(a[left]<=key && left<right)
		{
			//Ѱ�ұ������ֵ�������ұ�
			left++;
		}	
		if(left<right)
			SWAP(a[left],a[right]);
	}while(left<right);
	
	return right;
}


void Fast_sort(int a[],int index_min,int index_max)
{
	if(index_max<=index_min)
		return;
	else if(index_min+1==index_max)//ֻʣ����Ԫ��ʱ
	{
		if(a[index_min]>a[index_max])
			SWAP(a[index_min],a[index_max]);
		return;
	}
	int j = median(a,index_min,index_max);
	Fast_sort(a,index_min,j-1);
	Fast_sort(a,j+1,index_max);
}