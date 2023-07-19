#include<stdio.h>
#include<stdlib.h>

/*
	循环遍历，看每一个结点后面的结点有没有指向前面的结点
	1表示存在环
	0表示没有环
*/
int EstimateList(struct node *list)
{
	if(list == NULL)
		return 0;
	struct node *p = list;
	struct node *pre = p;
	
	while(p)
	{
		while(pre->next)
		{
			if(p == pre->next)
				return 1
			pre = pre->next;
		}
		p = p->next;
		pre = p;
	}
	return 0;
}