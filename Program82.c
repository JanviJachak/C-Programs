#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iSize)
{
    int iCnt = 0;

    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
            
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

    }
    printf("\nMax element is : %d",iMax);
    printf("\nMin element is : %d",iMin);
    

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    

    printf("\nEnter the no of elemts : ");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount * sizeof(int));
    printf("\nDynamic memory is allocatedc");

    printf("\nenter the elements : ");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nenter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    MaxMin(ptr , iCount);


    free(ptr);
    printf("\nDynamic Memory is deallocated");


    return 0;
}