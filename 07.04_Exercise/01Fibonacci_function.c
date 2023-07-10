#include <stdio.h>

int Fibonacci_function(int n);


int main()
{
	int n,numble;
	scanf("%d",&n);
	numble = Fibonacci_function(n);		
	printf("%d", numble);
	return 0;
}



int Fibonacci_function(int n)
{
	
	int temp1 = 1, temp2 = 1;
	int temp3;
	if(n=<2)
		return 1;
	while(n-->2)
	{
	temp3 = temp1 +temp2;
	temp1 = temp2;
	temp2 = temp3;
	}
	
	return temp3;
}