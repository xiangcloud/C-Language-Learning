#inlcude <stdio.h>


int main()
{
	int a[10] = { 2,1,4,6,23,245,632,431,41,12 };

	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	
	
	
	for (int i = 0; i < 10 - 1; i++)		
	{
		int flag = 0;
		for (int j = 0; j < 10 - 1 - i; j++)  
		{
			if (a[j] < a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				flag = 1;
			}
		}
		if (!flag)
			break;
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
}