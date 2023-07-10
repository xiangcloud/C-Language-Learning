#include <stdio.h>
#include <math.h>
/*写一个函数，输出一个数所有的质因数*/
void Mass_factor(int n);

int main()
{
	int n;
	
	scanf("%d",&n);
	
	printf("%d=",n);
	
	Mass_factor(n);
	
	return 0;
}


void Mass_factor(int n)
{
	int i = 2;
	while(i<=n)
	{
		if(n%i==0 && n/i!=1)
		{
			printf("%d*",i);
			n = n / i;
		}
		else if(n%i== 0 && n/i == 1)
		{
			printf("%d\n",i);
			break;
		}
		else
			i++;
	}
}