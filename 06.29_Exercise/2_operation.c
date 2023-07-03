#include <stdio.h>
/*方法一*/
// int main()
// {	
    // int num;
	// int count = 0;
    // scanf("%d",&num);
    // for(int i=0;(i<32);i++)
    // {			
        // if(num & 1 << i)   
            // count+=1;
    // }
	// printf("Your input has: %d ones\n",count);
    // return 0;
// } 

/*方法二:最优解*/

int main()
{
	int num;
	int count = 0;
	scanf("%d",num);
	while(num)
	{
		num = num&(num-1);
		count++;
	}
	printf("Your input has: %d ones\n",count")
	return 0;
}