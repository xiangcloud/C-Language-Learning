#include <stdio.h>
#define MAX(x) sizeof(x)-1

int mystrlen(const char *str);

int main()
{
	
	char arr[1024] = "\0";
	
	char *str;
	
	str = fgets(arr,MAX(arr),stdin);
	
	int n = mystrlen(str);
	
	printf("%d\n",n);

	
}


int mystrlen(const char *str)
{
	int dest = 0;
	//asdaasda
	while(*(str+dest) != '\0' && *(str+dest) != '\n')
	{
		dest++;
	}
	return dest;
}