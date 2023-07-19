#include <stdio.h>
#include <stdlib.h>

// 假设 1 3 5 7 9 是一个线性表
typedef int Elemtype;	//Elemtype 是数据元素的类型

struct node
{
    //保存数据元素		//数据域  
  	Elemtype data;		//保存数据元素
    //保存逻辑关系		//指针域
    struct node *next;	//保存下一个数据元素的地址
    //struct node *prev;	
};

typedef struct ManageNode
{
    // 保存链表结点个数
    int listNum;
    
    // 保存链表的第一个结点
    struct node *first;
    // 保存链表的最后一个结点
    struct node *last;
}Manage;

// 创建链表之前 先初始化一个管理结点
Manage *createManageNode()
{
    Manage * MList = (Manage *)malloc(sizeof(Manage));
    MList->listNum = 0;
    MList->first = NULL;
    MList->last = NULL;
    
    return MList;
}

void crateListNode(struct node **new, Elemtype data)
{
    *new = malloc(sizeof(struct node));
    (*new)->data = data;
    (*new)->next = NULL;
}

void addNodeToList(Manage *MList, struct node *new)
{
    // 表示是一个空链表
    if ( MList->listNum == 0 )        
	{
		MList->first = new;    
		MList->last = new;
	}
    else  // 尾插
	{
		struct node *p = MList->first;
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
			if(p == MList->first)
			{
				new->next = MList->first;
				MList->first = new;
			}
			else
			{
				pre->next = new;
				new->next = p;
			}
		}
		else
		{
			MList->last->next = new;
			MList->last = new;
		}
	}
    MList->listNum++;
}
	//头插法
void addNodeToList2(Manage *MList, struct node *new)
{
    // 表示是一个空链表
    if ( MList->listNum == 0 )           
		MList->last = new;
    else   //头插
        new->next = MList->first;
    MList->first = new;
    MList->listNum++;
}


void printList(Manage *MList)
{
    printf("List Node NUM = %d\n", MList->listNum);
    struct node *p = MList->first;
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

struct node *deletedataFromlist(Manage *Mlist,int data)
{
	if(Mlist->first == NULL) return Mlist->first;
	
	struct node *p = Mlist->first;
	struct node *pre = p;
	
	while(p)
	{
		if(data == p->data)
			break;
		
		pre = p;
		p = p->next;	
		
	}
	if(p)
	{
		
		if(p == Mlist->first )
			Mlist->first = Mlist->first->next;
		
		else
			pre->next=p->next;
		
		p->next = NULL;
		free(p);
		Mlist->listNum--;
	}
	return 	Mlist->first;
}

void destoryList_r(struct node *first)
{
	struct node *p = first;
	// 如果链表存在 才能被销毁
	if(first)
	{
		// 保存 待销毁的结点地址
		p = p->next;
				
		// 销毁第一个结点
		first->next = NULL;  // 将指针域设置为NULL
		free(first);
		
		// 销毁剩下的结点
		destoryList_r(p);
	}
	
	
}

int main()
{   
    Elemtype data;
    // 创建一个管理结点
    Manage *MList = createManageNode();
    // new 指向新创建的结点
    struct node *new = NULL;
    while(1)
    {
        // 1.输入数据元素
        scanf("%d", &data);
        if (data == 0)
        {
            printf("data input OK\n");
            break;
        }
        
        // 2.将数据元素包装成一个结点 struct node
        crateListNode(&new, data);

        // 3.将结点添加进入链表中 -- first 来表示是第一个
        addNodeToList(MList, new);        
    }   
    
    // first 就指向了 单链表
    printList(MList);
	
	char ch;
	printf("Do you need to delete the node please input y or n\n");
	//吸收掉最后的0
	getchar();
	scanf("%c",&ch);
	if(ch == 'y')
	{
		printf("please input delete data\n");
		scanf("%d",&data);
		
		MList->first = deletedataFromlist(MList,data);
		
		printList(MList);	
	}
	
	destoryList_r(MList->first);
	
	free(MList);
    
    return 0;
}