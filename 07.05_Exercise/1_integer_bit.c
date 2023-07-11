#include <stdio.h>

void integer_bit(int n);

int main()
{
	int n,i;
	
	scanf("%d",&n);
	
	integer_bit(n);
	
	printf("\n");

	return 0;
}


void integer_bit(int n)
{
	if(n>9)
	{	
		integer_bit(n/10);
	}
	printf("%d\t",n%10);
	
	
}