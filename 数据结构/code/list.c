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

		
		//2�������ݱ�Ϊ���
		crateListNode(&new,data);
		
		//3������������
		addNodeToListsort(&first,new);
			
		
	}
	//4����ӡ����
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
	
	
	//5���ͷſռ�
	desfree(first);
	
}

//2�������ݱ�Ϊ���    
void crateListNode(struct note **new,int data)
{
	*new = malloc(sizeof(*new));
	(*new)->data = data;
	(*new)->next = NULL;
}

//3����������������

void addNodeToListsort(struct note **list,struct note *new)
{
	//end Ϊ��ǰֵ
	static struct note *end = NULL;
	static int min;
	//p ��������һ�����
	struct note *p = NULL;
	if(*list == NULL)
	{
		*list = new;
		//min->data ��ʱ���һ��ֵΪ��Сֵ�����������������С�Ĵ�ǰ�沢�Ҹ���first
		min = (*list)->data;
	}
	else
	{
		end = *list;
		
		int flag = 1;
		
		p = end;
		
		while(end = end->next)
		{
			//�������С����С�����ݷŵ����
			if( new->data < min )
			{
				//������Сֵ
				min = new->data;
				new->next = *list;
				
				//����first
				*list = new;
				
				flag = 0;
				break;
				
			}
			
			//������һ�α���������ݽ������ȥ,ͬʱpΪ��һ�ε�end
			else if(new->data <= end->data)
			{
				
				p->next = new;
				new->next = end;
				
				flag = 0;
				break;
			}	
			
			p = end;
			
		}
		
		//�����û��������ŵ����ұ�
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


//4����ӡ����
void printlist(struct note *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

//5���ͷſռ�
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

