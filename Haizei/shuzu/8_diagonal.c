#include <stdio.h>

/*
	������ѧԺ����ʦ��ͬѧ���ų���һ��n*n�ķ���
	���������֪���������ĶԽ����ϵ�ͬѧ����߶�����ô���ġ�
	����֪����ͬѧ����ߣ���ֵΪ��������λ�����ס�
	Ҫ��������жԽ����ϣ��������ҡ����� ���±��ʱ���б����ͬ����ͬѧ����ߡ�
*/

void diagonal(int *p,int n);

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n][n];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
		
	diagonal(&arr[0][0],n);
	
}

void diagonal(int *p,int n)
{
	int i = 0;
	int (*q)[n];
	q = (typeof(q))p;
	while(n-->0)
	{
		printf("%d\n",q[i][i]);
		i++;
	}
}