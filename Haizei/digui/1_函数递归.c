#include <stdio.h>
int recursion(int x);


int main()
{
	int x,sum = 0;
	scanf("%d",&x);
	
	sum = recursion(x);
	printf("%d\n",sum);
	return 0;
}



int recursion(int x)
{
	
	if(x == 1)
		return 1;
	else if(x <= 0)
		return 0;
	else if(x>1)
	{
		if(x % 2 )
			return  3*recursion((x+1)/2)-1;
		else
			return  3*recursion(x/2)-1;
	}
	
}