#include<stdio.h>
#include<stdlib.h>

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

    else //LL contains node
    {
        newn->next = *Head;  
       ( *Head )->prev = newn;
       *Head = newn;    
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
        newn->prev= *Tail;
        (*Tail)->next = newn;
        *Tail = newn;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}
void InsertAtPos(PPNODE Head, PPNODE Tail,int no , int ipos)
{ }
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL)) //LL is empty
    {
        return;
    }
    else if(*Head == *Tail) //LL has one node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }

    else // LL has more than 1 node
    {
        (*Head) = (*Head) ->next; // shikshakacha dokyat pudhchacha next taka
        free((*Tail)->next);    // also write free((*Head)->prev)

        (*Tail)->next = *Head; // shevtcha cha next mdhe philacha add
        (*Head)->prev = *Tail; // philacha prev mdhe shevtchacha add
    }
 }
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL)) //LL is empty
    {
        return;
    }
    else if(*Head == *Tail) //LL has one node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }

    else // LL has more than 1 node
    {
       
    }
 }
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{ }
void Display(PNODE Head, PNODE Tail)
{ 
    printf("Elements of Linked List are : \n");

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | <=> ",Head->data);
            Head = Head -> next;
        }while(Head != Tail->next);

        printf("Address of Fisrt node\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head -> next;
        }while(Head != Tail->next);
    }
    return iCnt;    
 }

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet=0;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);

    Display(first,last);
    iRet = Count(first,last);
    printf("No of nodes are %d",iRet);

    DeleteFirst(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("No of nodes are %d",iRet);


    return 0;
}