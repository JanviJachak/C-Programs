#include<stdio.h>

typedef struct node 
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{ }
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{ }
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