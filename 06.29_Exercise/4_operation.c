#include<stdio.h>
/*输入一个正整数打印该整数的连续正整数之和*/

int main()
{
	int x,i=1,flag = 0,num=0;
	scanf("%d",&x);
	for(i=1;i<=x/2;i++)
	{
		for(int j=i;j<=x/2+1;j++)
		{
			if((i+j)*(j-i+1)/2==x)
			{
				flag=1;
				printf("%d=",x);
				for(num=i;num<=j;num++)
				{
					if(num!=j)
						printf("%d+",num);
					else
						printf("%d",num);					
				}
				printf("\n");
			}
		}
	}
	if(!flag)
	{
		printf("NO the numble");
	}
	return 0;
}
