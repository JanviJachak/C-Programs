#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    

    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }

    }
  
   return iFrequency; 

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iValue = 0;
    

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

    printf("\nEnter the elemnt to be count : ");
    scanf("%d",&iValue);

    iRet = Frequency(ptr , iCount, iValue);

    printf("%d occcurs %d times",iValue,iRet);

    free(ptr);
    printf("\nDynamic Memory is deallocated");


    return 0;
}