#include <stdio.h>
/*求字符串长度*/
int Character_length(char str[]);

int main()
{
	char str[100];
	
	scanf("%s",str);
	
	printf("%d\n",Character_length(str));
	
	return 0;
}

int Character_length(char str[])
{
	int count = 0,i=0;
	
	while(str[i] != '\0')
	{
		if(str[i]>0 && str[i]<128)
			count++;
		i++;
	}
	return count;
}
