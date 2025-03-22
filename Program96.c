
//   1  2   3  4   5   6
//   *  *   *  *   *   *

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt=1 ; iCnt<= 4; iCnt++)
    {
        printf(" * ");
    }

    printf("\n");

    for(iCnt=1 ; iCnt<= 4; iCnt++)
    {
        printf(" * ");
    }

    printf("\n");

    for(iCnt=1 ; iCnt<= 4; iCnt++)
    {
        printf(" * ");
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}