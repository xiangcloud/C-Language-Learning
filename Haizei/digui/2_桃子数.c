#include <stdio.h>

int taozi(int x,int k);
int main()
{
	int n;
	scanf("%d",&n);
	
	int k = 1;
	n = taozi(n,k);
	
	printf("%d\n",n);
	
	return 0;
}


int taozi(int x,int k)
{
	if(x == 1)
		return k;
	k = k*2+2;
	k = taozi(--x,k);
	return k;

}