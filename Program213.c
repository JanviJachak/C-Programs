#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void push(PPNODE Head, int no) // InsertFirst
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void pop(PPNODE Head)  //DeleteFirst
{
    
}

void Display(PNODE Head)
{
    printf(" No of elemts are \n:");

    while(Head != NULL)
    {
        printf("| %d |\n",Head->data);
        Head = Head->next;
    }


}

int main()
{
    PNODE first = NULL;

    push(&first,101);
    push(&first,51);
    push(&first,21);
    push(&first,11);

    Display(first);

    return 0;
}