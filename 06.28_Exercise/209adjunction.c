#include <stdio.h>
int jisuan(int years,int month,int data);
/*
	Number_days:�������
	Days_birth:����������˶�����
	Current_days����ǰ����˶�����
	years,month,data������������
	The_year,The_month,The_data����ǰ������
*/

int main()
{
	int Number_days=0;
	int Days_birth=0;
	int Current_days=0;
	int years,month,data;
	int The_year,The_month,The_data;
	
	printf("���������������:");
	scanf("%d.%d.%d",&years,&month,&data);
	//���������������˶�����
	Days_birth = jisuan(years,month,data);
	//������366-����������������365-��������
	Days_birth = (years%4==0 && years%100!=0)?366-Days_birth:365-Days_birth;
	printf("�������������:");
	scanf("%d.%d.%d",&The_year,&The_month,&The_data);
	//���㵱ǰ����˶�����
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
	printf("���Ѿ�����%d��\n",Number_days);
	
	return 0;
}
/*
	jisuan():���������˶�������
	years:�������
	month:�����·�
	data:��������

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