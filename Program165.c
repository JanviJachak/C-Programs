#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct Node
{
    int data;          // 4 bytes
    struct node *next; // 8 bytes
};

typedef struct node NODE;       // struct node = NODE
typedef struct node * PNODE;    // struct node * = PNODE
typedef struct node ** PPNODE;  // struct node** = PPNODE

int main()
{

    struct node *First = NULL; // this will hold the address of first node .... When we get the add of first node we'll be able to get the address of all nodes

    

    return 0;
}