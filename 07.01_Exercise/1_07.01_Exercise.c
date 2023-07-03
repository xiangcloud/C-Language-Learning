#include <stdio.h>
#define DIM(x) sizeof(x)/sizeof(x[0])
/*二分查找*/
int main()
{

	int arr[5] = { 1,5,7,9,12 };

	int right = DIM(arr) - 1;
	int left = 0;
	int mid, x = 0;

	scanf("%d", &x);

	while (left <= right)
	{
		mid = (right + left) / 2;
		if (arr[mid] == x)
		{
			printf("arr[%d]=", mid, arr[mid]);
			break;
		}
		else if (arr[mid] < x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	if (left >= right)
		printf("no found");
	return 0;
}