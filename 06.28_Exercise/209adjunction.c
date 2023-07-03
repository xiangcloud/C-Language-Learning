#include <stdio.h>
int jisuan(int years,int month,int data);
/*
	Number_days:存活天数
	Days_birth:出生当年活了多少天
	Current_days：当前年活了多少天
	years,month,data：出生年月日
	The_year,The_month,The_data：当前年月日
*/

int main()
{
	int Number_days=0;
	int Days_birth=0;
	int Current_days=0;
	int years,month,data;
	int The_year,The_month,The_data;
	
	printf("请输入出生年月日:");
	scanf("%d.%d.%d",&years,&month,&data);
	//计算出生年出生过了多少天
	Days_birth = jisuan(years,month,data);
	//闰年用366-出生天数；否则用365-出生天数
	Days_birth = (years%4==0 && years%100!=0)?366-Days_birth:365-Days_birth;
	printf("请输入今年月日:");
	scanf("%d.%d.%d",&The_year,&The_month,&The_data);
	//计算当前年过了多少天
	Current_days = jisuan(The_year,The_month,The_data);
	for(int i=1;i<The_year-years;i++)
	{
		if(!((years+i)%4==0 && (years+i)%100!=0 ))
		{
			Number_days+=365;	
		}
		else
		{
			Number_days+=366;
		}
		
	}
	Number_days = Number_days+Days_birth+Current_days;
	printf("你已经活了%d天\n",Number_days);
	
	return 0;
}
/*
	jisuan():计算距年过了多少天数
	years:传入年份
	month:传入月份
	data:传入日期

*/
int jisuan(int years,int month,int data)
{
	int Number_days=0;
	if(!(years%4==0 && years%100!=0 ))
	{
		for(int i=1;i<month;i++)
		{
			if(i==2)
				Number_days +=28;
			else if((i==4)||(i==6)||(i==9)||(i==11))
				Number_days +=30;
			else 
				Number_days +=31;
		}
		Number_days += data;
		
	}
	else
	{
		for(int i=1;i<month;i++)
		{
			if(i==2)
				Number_days +=29;
			else if((i==4)||(i==6)||(i==9)||(i==11))
				Number_days +=30;
			else 
				Number_days +=31;
		}
		Number_days += data;
	}
	return Number_days;
}