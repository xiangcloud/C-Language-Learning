#include <stdio.h>


int main(){
	
	int n;
	scanf("%d",&n);
	
	char big[n];
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		getchar();
		scanf("%c",&big[i]);
		scanf("%d",&arr[i]);
	}
			
	char str[30];
	scanf("%s",str);
	
	int sum = 0,i = 0;
	while(str[i]!='\0'){
	
		if(str[i]>='A' && str[i] <= 'Z'){
			
			for(int k=0;k<n;k++){
				
				if(str[i] == big[k])
					sum+=arr[k];
			}
			
		}
	i++;
	}
	printf("%d\n",sum);

}