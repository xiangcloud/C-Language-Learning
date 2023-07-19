#include<stdio.h>
#include<stdlib.h>


/*
	先让快指针走k步，然后两个指针同步走，
	当快指针走到头时，慢指针就是链表倒数第k个结点
*/
void *returnLastNum(struct node *first,int k)
{
	if(first == NULL)
		return first;
	struct node *current = first;
	struct node *current_k = first;
	
	while(current_k)
	{
		current_k = current_k->next;
		k--;
		if(k<0)
			current = current->next;
	}
	return current;
}