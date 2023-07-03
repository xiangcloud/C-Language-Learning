#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	a = a/10;
	if(a<=10)
	{
		switch(a)
		{
			case 9:
				printf("A\n");
				break;
			case 8:
				printf("B\n");
				break;
			case 7:
			case 6:
				printf("C\n");
				break;
			default:
				printf("D\n");
		}
	}
	else
		printf("err");
	return 0;
}