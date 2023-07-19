#include<stdio.h>
#include<stdlib.h>


struct ListNode* reverseList(struct ListNode* head)
{

	if(head == NULL || head->next == NULL)
		return head;
	else
	{
		//保存头节点
		struct ListNode* mid = head;
		//保存下一个节点
		struct ListNode* latter = mid->next;
		//递归到最后一个,返回转置后链表的地址
		head = reverseList(latter);
		//让后面的节点指向前一个节点
		latter->next = mid;
		//每次递归返回都赋值为空，最后一次返回将转置后的节点的next赋值为空
		mid->next = NULL;
		
		return head;
	}
}