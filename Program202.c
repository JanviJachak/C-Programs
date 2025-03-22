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

void InsertFirst(PPNODE Head, PPNODE tail, int no)
{ }
void InsertLast(PPNODE Head, PPNODE tail, int no)
{ }
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