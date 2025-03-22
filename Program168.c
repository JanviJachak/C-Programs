// InsertFirst() Function

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
    struct node* newn = NULL;
    newn = (PNODE)malloc(sizeof(struct node));

    newn->data = No;
    newn->next = NULL;

}

int main()
{

    PNODE First = NULL; // this will hold the address of first node .... When we get the add of first node we'll be able to get the address of all nodes

    //Three Nodes
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    return 0;
}