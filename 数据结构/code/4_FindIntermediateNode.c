#include<stdio.h>
#include<stdlib.h>


void *FindIntermediaNode(struct node *one)
{
	// two走两步，one走一步，当two 或者 two->next为NULL时,此时one为一半
	struct node *two = list;
	while(two && two->next)
	{
		one = one->next;
		two = two->next->next;	
	}
	return one;

}