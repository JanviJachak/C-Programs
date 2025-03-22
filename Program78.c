#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt= 0; iCnt< iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return (((float)iSum)/((float)iSize)); //typecast

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

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

    fRet = Average(ptr , iCount);

    printf("\naverage of is : %f",fRet);

    free(ptr);
    printf("\nDynamic Memory is deallocated");


    return 0;
}