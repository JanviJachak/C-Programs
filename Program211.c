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
      *Tail = (*Tail)->prev;  // last mdhli value change kra
      free((*Tail)->next);  // free((*Head)->prev)

      (*Tail)->next = *Head;
      (*Head)->prev = *Tail;  
    }
 }

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

void InsertAtPos(PPNODE Head, PPNODE Tail,int no , int ipos)
{ 
    int Size =0;
    Size = Count(*Head,*Tail);
    PNODE newn = NULL;
    PNODE temp = *Head;


    if((ipos<1) || (ipos>Size+1))
    {
        printf("Invalid Pos");
    }

    if(ipos == 1)
    {
        InsertFirst(Head,Tail,no);
    }

    else if( ipos == Size+1)
    {
        InsertLast(Head,Tail,no);
    }

    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data= no;
        newn->next = NULL;
        newn ->prev = NULL;

        for(int i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{ 
    int Size =0;
    Size = Count(*Head,*Tail);

    PNODE temp = *Head;


    if((ipos<1) || (ipos>Size))
    {
        printf("Invalid Pos");
    }

    if(ipos == 1)
    {
        DeleteFirst(Head,Tail);
    }

    else if( ipos == Size)
    {
        DeleteLast(Head,Tail);
    }

    else
    {
       

        for(int i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free((temp->next->prev));
        temp->next->prev = temp;
    }
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
    printf("\nNo of nodes are %d",iRet);

    InsertAtPos(&first,&last,105,5);
    Display(first,last);
    iRet = Count(first,last);
    printf("\nNo of nodes are %d",iRet);

    DeleteAtPos(&first,&last,5);
    Display(first,last);
    iRet = Count(first,last);
    printf("\nNo of nodes are %d",iRet);

    DeleteFirst(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("\nNo of nodes are %d",iRet);

    DeleteLast(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("\nNo of nodes are %d",iRet);

    


    return 0;
}