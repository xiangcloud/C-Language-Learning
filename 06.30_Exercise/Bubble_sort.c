#include <stdio.h>

int maiin()
{
	int a[10] = {2,1,4,6,23,245,632,431,41,12}
	//输出原始数组中的值
	for(i=0; i<10; i++)
		printf("%d ", a[i]);
	printf("\n");
	int flag = 0;
	//冒泡排序
	for(i=0; i<10-1; i++)		//冒泡排序的轮次
	{
		//每一轮比较的次数会随着比较轮次的增加而减少
		for(j=0; j<10-1-i; j++)   //每一轮比较的次数
		{
			//两两比较,如果前一个比后一个大，则交换
			//我们使用了j+1 , 要注意防止越界
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 1;
			}
		}
		if(!flag)
			break;
	}
	for(i=0; i<10; i++)
		printf("%d ", a[i]);
	printf("\n");
}