#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;   //#

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;  //#

    if(*Head == NULL) //LL is empty
    {
        *Head = newn;
    }

    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        newn->data = no;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next= NULL;
    newn->prev = NULL;  //#

    if(*Head == NULL) //LL is empty
    {
        *Head = newn;
    }

    else
    {
        
    }
}
void InsertAtPos(PPNODE Head, int no, int ipos)
{}
void DeleteFirst(PPNODE Head)
{}
void DeleteLast(PPNODE Head)
{}
void DeleteAtPos(PPNODE Head, int ipos)
{}
void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head != NULL)
    {
        printf("| %d | ->",Head->data);
        Head = Head -> next;
    }

    printf("NULL \n");
}
int Count(PNODE Head)
{}

int main()
{

    PNODE First = NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);


    return 0;
}