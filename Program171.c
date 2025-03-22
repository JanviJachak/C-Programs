// InsertFirst() Function And Display function

#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct node
{
    int data;          // 4 bytes
    struct node *next; // 8 bytes
};

typedef struct node NODE;       // struct node = NODE
typedef struct node * PNODE;    // struct node * = PNODE
typedef struct node ** PPNODE;  // struct node** = PPNODE

void InsertFirst(PPNODE Head, int No)
{
    //Step1 : Allocate the memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    // Step2: Initialised the node
    newn->data = No;
    newn->next = NULL;

    //Check whether link list is empty or not
    if(*Head == NULL) // LL is empty
    {
        *Head = newn;

    }
    else //LL contains atleast one node in it
    {
        newn -> next = *Head;
        *Head = newn;

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
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }

    return iCnt;
}

int main()
{

    PNODE First = NULL; // this will hold the address of first node .... When we get the add of first node we'll be able to get the address of all nodes

    //Three Nodes
    InsertFirst(&First,101); 
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    int iRet = Count(First);

    printf("No of Nodes : %d ",iRet);

    return 0;
}