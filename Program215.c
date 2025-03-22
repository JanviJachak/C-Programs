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

void Enqueue(PPNODE Head, int no)  // InsertLast
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }

    else 
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

int Dequeue(PPNODE Head)  //DeleteFirst
{
    int value =0;
    PNODE temp = *Head;
   
   if(*Head == NULL)
   {
    printf("Queue is empty");

   }

   else
   {
    value =(*Head)->data;
    *Head = (*Head)->next;
    free(temp);
   }

   return value;
}

void Display(PNODE Head)
{
    printf("Elemts are \n:");

    while(Head != NULL)
    {
        printf("| %d |\t",Head->data);
        Head = Head->next;
    }
   printf("\n");

}

int main()
{
    PNODE first = NULL;

    Enqueue(&first,11);
    Enqueue(&first,21);
    Enqueue(&first,51);
    Enqueue(&first,101);
    Enqueue(&first,111);

    Display(first);

    int iRet = 0;

    iRet = Dequeue(&first);
    printf("removed eleemt is %d ",iRet);
    Display(first);

    iRet = Dequeue(&first);
    printf("removed eleemt is %d ",iRet);
    Display(first);

    

    return 0;
}