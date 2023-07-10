#include <stdio.h>

/*写一个求根号函数，用二分法找出最接近的值*/

double Sqrt(double n);

int main()
{
	double n,sqrt;
	
	scanf("%lf",&n);
	
	sqrt = Sqrt(n);
	
	printf("%lf\n",sqrt);
	
	return 0;
}

double Sqrt(double n)
{
	double left = 0,right = n;
	double mid = 0;
	while(right > left)
	{	
		mid = (left+right) / 2;
		if(mid * mid == n)
		{
			break;
		}
		if(mid * mid > n)
			right  = mid- 0.000001;
		else 
			left = mid+0.000001;
	}
	return mid;
}