#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
#define SWAP(x,y) x=(x)+(y)-((y)=(x))

// void lottery(int *Line,int *Column);

// int main()
// {
	// printf("Random lottery:\n");
	
	// int Line,Column;
	
	// lottery(&Line,&Column);
	
	// printf("Line = %d\nColumn = %d\n",Line,Column);
	
	// return 0;
// }

// void lottery(int *Line,int *Column)
// {
	// srand((unsigned int)time(NULL));

	// *Line = rand() % 6 + 1;
	
	// *Column= rand() % 13 + 1;
	
// }


int main()
{
	int i =1;
	int j =2;
	SWAP(i,j);
	printf("%d\t%d",i,j);
	return 0;
}