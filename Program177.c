#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;

};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn =(PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)//LL is empty
    {
        *Head = newn;   //shikshkachya dokyat pahila poracha address
        

    }

    else //LL not empty
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    //temporrary pointer for link list traversal
    PNODE Temp = *Head;

    PNODE newn =(PNODE)malloc(sizeof(NODE));


    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)//LL is empty
    {
        *Head = newn;   //shikshkachya dokyat pahila poracha address
        

    }

    else //LL not empty
{
    // Travel LL till last node
    while (Temp->next != NULL)
    {
        Temp = Temp->next;
    }

    // Add the address of the new node at the end of the last node
    Temp->next = newn;
}

}

void DeleteFirst(PPNODE Head)
{
    
    PNODE Temp = *Head;

    if((*Head) == NULL) // Case 1
    {
        return;

    }
    else if((*Head) -> next == NULL) //case 2 
    {
        free(*Head);
        *Head = NULL;
    }

    else //case 3
    {

        *Head = (*Head)->next;
        free(Temp);
    }
    
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if((*Head) == NULL) // Case 1
    {
        return;

    }
    else if((*Head) -> next == NULL) //case 2 
    {
        free(*Head);
        *Head = NULL;
    }

    else //case 3
    {

        while(Temp-> next -> next != NULL)
        {
           Temp = Temp -> next; 
        }
        free(Temp->next);
        Temp -> next = NULL;

    }
    
}


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
{
    int iCnt=0;
     while(Head != NULL)
    {
         iCnt++;
         Head = Head ->next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);

    PNODE  newn = NULL;
    int i = 0;
    PNODE temp = *Head;


    //case1 : invalide pos
    if((iPos<1) || (iPos > Size +1))
    {
        printf("invalide position");
        return;
    }

    //case2 : first pos
    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }

    //case3 : last pos
    else if(iPos == Size+1)
    {
        InsertLast(Head,No);
    }

    //case4 : position in between first and last
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn-> next = NULL;

        for(i=1; i< iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp ->next = newn;

    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertLast(&First, 121);


    InsertAtPos(&First,105, 5);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("No of nodes are \n: %d ",iRet);

    return 0;
}