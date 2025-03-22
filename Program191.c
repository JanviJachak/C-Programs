#include<stdio.h>

typedef struct node 
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{ 
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn-> data = no;
    newn-> next = NULL; 

    if((*Head == NULL) && (*Tail==NULL )) //LL is empty
    {
        *Head = newn;
        *Tail= newn;
        (*Tail)->next = *Head; 
    }

    else //LL contain atleast one node
    {
        newn->next = *Head;
        *Head = newn;
        (*Tail)->next = *Head; 


    }
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn-> data = no;
    newn-> next = NULL; 

    if((*Head == NULL) && (*Tail==NULL )) //LL is empty
    {
        *Head = newn;
        *Tail= newn;
        (*Tail)->next = *Head; 
    }

    else //LL contain atleast one node
    {
        
    }
 }
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{ }

void DeleteFirst(PPNODE Head, PPNODE Tail)
{ }
void Deletelast(PPNODE Head, PPNODE Tail)
{ }
void DeleteAtPos(PPNODE Head, PPNODE Tail,int ipos)
{ }
void Display(PNODE Head,PNODE TAil)
{ }
int Count(PNODE Head, PNODE Tail)
{ 
    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;   //#


    return 0;
}