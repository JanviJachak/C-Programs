#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Elemts of array are : \n");

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

int main()

{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter no of elements : ");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the values : ");

    for(iCnt= 0 ; iCnt< iCount  ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr , iCount);

    free(ptr);


    return 0;
}