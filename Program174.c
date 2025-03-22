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
        //Travel LL till last node
        while(Temp -> next != NULL)
        {
            Temp = Temp->next;
        }

        Temp -> next = newn; // Add the add of new node at the end of last node
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

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    

    Display(First);
    iRet = Count(First);
    printf("No of nodes are : %d ",iRet);

    InsertLast(&First, 121);
    InsertLast(&First, 151);

    Display(First);
    iRet = Count(First);
    printf("No of nodes are : %d ",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("No of nodes are : %d ",iRet);

    

    return 0;
}