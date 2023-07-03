#include <stdio.h>


int main()
{
	char a;
	a = getchar();
	if(a>='A' && a<='Z')
	{
		printf("%c\n",a+32);
	}
	else
	{
		printf("%c\n",a-32);
	}
	return 0;
}