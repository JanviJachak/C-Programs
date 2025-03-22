#include<stdio.h>


void Fun_Value(int No)
{
    No++;
}

void Fun_Address(int *ptr)
{
    (*ptr)++;
}

void Fun_Refrence(int &ref)
{
    ref++;
}

int main()
{
    int i = 10, j= 10, k = 10;

    Fun_Value(i);
    Fun_Address(&j);
    Fun_Refrence(k);

    printf("Call by value : i - %d\n",i);
    printf("Call by address : j - %d\n",j);
    printf("Call by refrence : k - %d\n",k);

    return 0;
}

//Output  
/*
Call by value : i - 10
Call by address : j - 11
Call by refrence : k - 11

*/