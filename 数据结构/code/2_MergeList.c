#inlcude <stdio.h>
#include <stdio.h>



/*
	归并两个链表，归并后仍然有序
*/
void *Mergelist(struct node *list1,struct node *list2 )
{
	//如果链表为空则返回另一个链表
	if(list1 == NULL)
		return list2;
	if(list2 == NULL)
		return list1;
	
	struct node *head = malloc(sizeof(struct node));
	struct node *pre = head;
	
	while(list1 && list2)
	{
		if(list1->data < list2->data)
		{
			pre->next = list1;
			list1 = list1->next;
		}
		else
		{
			pre->next = list2;
			list2 = list2->next;
		}
		pre = pre->next;
	}
	pre->next = (NULL==list1?list2:list1);
	return head->next;
}




struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if(l1 == NULL)return l2;
	if(l2 == NULL)return l1;
	if(l1->val < l2->val){
		l1->next = mergeTwoLists(l1 ->next,l2);
		return l1;
	}
	else{
		l2->next = mergeTwoLists(l1,l2->next);
		return l2;
	}
}