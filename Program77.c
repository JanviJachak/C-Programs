// Question -----Display Addition of all ODD the elemts of array


#include<stdio.h>
#include<stdlib.h> 

int OddAddition(int Arr[] , int iSize) 
{
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
    
        if((Arr[iCnt] % 2) != 0) // ==1
        {
             iSum = iSum + Arr[iCnt];
        }
       
    }

    return iSum;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    
    printf("Enter the no of elements :  ");
    scanf("%d",&iCount);

    ptr = (int*) malloc(iCount* sizeof(int));
    printf("Dynamic memory gets allcated succesfully for %d elements",iCount);

    printf("\nEnter the %d values : \n ",iCount);

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)  
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    } 

    iRet = OddAddition(ptr,iCount); 

    printf("Addition of all odd elements is : %d ",iRet);

    free(ptr);
    printf("\nDynamic memory is deallocated successfully");

    return 0;
}


