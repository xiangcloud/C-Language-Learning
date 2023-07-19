#include<stdio.h>
#include<stdlib.h>




struct note
{
	int data;
	struct note *next;
	
};

void crateListNode(struct note **new,int data);
void addNodeToListsort(struct note **list,struct note *new);
void printlist(struct note *p);
void desfree(struct note *first);
struct note *deletedataFromlist(struct note *list,int data);


int main()
{
	struct note *first = NULL;
	struct note *new = NULL;
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
		addNodeToListsort(&first,new);
			
		
	}
	//4、打印链表
	printlist(first);
	
	char ch;
	printf("Do you need to delete the node please input y or n\n");
	getchar();
	scanf("%c",&ch);
	if(ch == 'y')
	{
		printf("please input delete data\n");
		scanf("%d",&data);
		first = deletedataFromlist(first,data);
		printlist(first);	
	}
	
	
	//5、释放空间
	desfree(first);
	
}

//2、将数据变为结点    
void crateListNode(struct note **new,int data)
{
	*new = malloc(sizeof(*new));
	(*new)->data = data;
	(*new)->next = NULL;
}

//3、将结点给链表排序

void addNodeToListsort(struct note **list,struct note *new)
{
	//end 为当前值
	static struct note *end = NULL;
	static int min;
	//p 用来存上一个结点
	struct note *p = NULL;
	if(*list == NULL)
	{
		*list = new;
		//min->data 此时存第一个值为最小值，后续如果遇到比它小的存前面并且更新first
		min = (*list)->data;
	}
	else
	{
		end = *list;
		
		int flag = 1;
		
		p = end;
		
		while(end = end->next)
		{
			//如果数据小于最小的数据放到左边
			if( new->data < min )
			{
				//更新最小值
				min = new->data;
				new->next = *list;
				
				//更新first
				*list = new;
				
				flag = 0;
				break;
				
			}
			
			//遇到第一次比他大的数据将他插进去,同时p为上一次的end
			else if(new->data <= end->data)
			{
				
				p->next = new;
				new->next = end;
				
				flag = 0;
				break;
			}	
			
			p = end;
			
		}
		
		//如果都没有遇到则放到最右边
		if(flag)
		{
			p->next = new;
		}
	}
	
}


struct note *deletedataFromlist(struct note *list,int data)
{
	if(list == NULL) return list;
	
	struct note *p = list;
	struct note *pre = p;
	
	while(p)
	{
		if(data == p->data)
			break;
		
		pre = p;
		p = p->next;	
		
	}
	if(p)
	{
		
		if(p == list)
			list = list->next;
		
		else
			pre-next=p->next;
		
		p->next = NULL;
		free(p);
		
	}
	return 	list;
}


//4、打印链表
void printlist(struct note *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

//5、释放空间
void desfree(struct note *first)
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

