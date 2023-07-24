#include <stdio.h>
#include <string.h>

int main(){

	char str[1024] = {'\0'};
	scanf("%s",str);
	
	int n; 
	scanf("%d",&n);
	
	char str1[1024] = {'\0'};
	scanf("%s",str1);
	
	printf("%d\n",strlen(str));
	int i;
	for(i=1;i<=strlen(str)+1;i++){
		if(str[i-1] == 'a')
			break
		
	}
	printf("%d\n",i);
	
	strcat(str1,&str[n-1]);
	
	strcpy(&str[n-1],str1);
	
	printf("%s",str);
	

}