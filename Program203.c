#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->prev= NULL;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn; 

        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }

    else
    {
        
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;


}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->prev= NULL;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn; 

        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }

    else
    {
        
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}
void InsertAtPos(PPNODE Head, PPNODE Tail,int no , int ipos)
{ }
void DeleteFirst(PPNODE Head, PPNODE Tail)
{ }
void DeleteLast(PPNODE Head, PPNODE Tail)
{ }
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{ }
void Display(PNODE Head, PNODE Tail)
{ }
void Count(PNODE Head, PNODE Tail)
{ }

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    return 0;
}