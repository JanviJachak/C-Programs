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
{}
void InsertLast(PPNODE Head, int no)
{}
void InsertAtPos(PPNODE Head, int no, int ipos)
{}
void DeleteFirst(PPNODE Head)
{}
void DeleteLast(PPNODE Head)
{}
void DeleteAtPos(PPNODE Head, int ipos)
{}
void Display(PPNODE Head)
{}
int Count(PNODE Head)
{}

int main()
{

    PNODE First = NULL;


    return 0;
}