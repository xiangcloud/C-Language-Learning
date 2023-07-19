#include<stdio.h>
#include<stdlib.h>
/*
	归并两个链表，归并后仍然有序
*/
typedef int Elemtype;	//Elemtype 是数据元素的类型

struct node
{
    //保存数据元素		//数据域  
  	Elemtype data;		//保存数据元素
    //保存逻辑关系		//指针域
    struct node *next;	//保存下一个数据元素的地址
    //struct node *prev;	
};


void crateListNode(struct node **new, Elemtype data)
{
    *new = malloc(sizeof(struct node));
    (*new)->data = data;
    (*new)->next = NULL;
}

void *addNodeToListsort(struct node *first, struct node *new)
{
    // 表示是一个空链表
    if ( first == NULL )        
	{
		first = new;    
		
	}
    else  // 尾插
	{
		struct node *p = first;
		struct node *pre = p;
		while(p)
		{
			if(p->data > new->data)
				break;
			
			pre = p;
			p = p->next;
		}
		if(p)
		{
			if(p == first)
			{
				new->next = first;
				first = new;
			}
			else
			{
				pre->next = new;
				new->next = p;
			}
		}
		else
			pre->next = new;
	}
	return first;
}

void printList(struct node *first)
{
    struct node *p = first;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

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

void desfree(struct node *first)
{	
	if(first == NULL)
		return;
	else
	{
		desfree(first->next);
		first->next=NULL;
		free(first);
	}
}

int main()
{
	struct node *first = NULL;
	
	struct node *twolistfirst = NULL;
	
	struct node *new = NULL;
	
	struct node *first2 = NULL;
	
	int data;
	
	while(1)
	{
		
		scanf("%d",&data);
		if(data == 0)
		{
			printf("input ok\n");
			break;
		}

		
		//2、将数据变为结点
		crateListNode(&new,data);
		
		//3、将结点给链表
		first = addNodeToListsort(first,new);
			
		
	}
	printList(first);
	
	getchar();
	printf("please input two list:\n");
	
	
	while(1)
	{
		
		scanf("%d",&data);
		if(data == 0)
		{
			printf("input ok\n");
			break;
		}

		
		//2、将数据变为结点
		crateListNode(&new,data);
		
		//3、将结点给链表
		first2 = addNodeToListsort(first2,new);
	
	}
	printList(first2);
	
	printf("twolist:\n");
	//
	twolistfirst = Mergelist(first,first2);
	
	//4、打印链表
	printList(twolistfirst);
	
	
	//5、释放空间
	desfree(twolistfirst);

	
}