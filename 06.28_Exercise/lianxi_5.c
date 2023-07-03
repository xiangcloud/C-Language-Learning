#include <stdio.h>

int main()
{
	char ch;
	int a,b;
	scanf("%d%c%d",&a,&ch,&b);
	switch(ch)
	{
		case '+':
			printf("%d+%d=%d\n",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d\n",a,b,a*b);
			break;
		case '/':
			printf("%d/%d=%.2f\n",a,b,(float)a/b);
			break;
		case '%':
			printf("%d%%%d=%d\n",a,b,a%b);
			break;
		default:
			printf("you input err\n");
	}	
	return 0;
}