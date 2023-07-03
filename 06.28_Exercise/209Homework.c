#include <stdio.h>

int main()
{
	int nian,yue,ri;
	int tianshu=0;
	scanf("%d.%d.%d",&nian,&yue,&ri);
	int temp = (nian%4==0 && nian%100!=0)?1:0;
	if(nian>0 && yue<=12 && yue>0 && ri<=31 && ri>0)
	{	
		for(int i=1;i<yue;i++)
		{
			if(i==2)
				tianshu = tianshu + temp;
			else if((i==4)||(i==6)||(i==9)||(i==11))
				tianshu +=30;
			else 
				tianshu +=31;
		}
		tianshu += ri;
		printf("%d.%d.%d的天数为%d天\n",nian,yue,ri,tianshu);
	}
	else
		printf("err")
	return 0;
}