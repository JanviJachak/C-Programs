#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct Node
{
    int data;          // 4 bytes
    struct node *next; // 8 bytes
};

int main()
{

    struct node *First = NULL; // this will hold the address of first node .... When we get the add of first node we'll be able to get the address of all nodes

    

    return 0;
}