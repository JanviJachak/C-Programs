// Question --- Display Even elemts of array
// Question -- Display odd elemnts of arrays

#include<stdio.h>
#include<stdlib.h> //for mallo and free

void OddDisplay(int Arr[] , int iSize) 
{
    int iCnt = 0;

    printf("\nOdd Elements of Array are : ");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if( (Arr[iCnt] % 2) != 0)
       {
         printf("%d\t",Arr[iCnt]);
       }
    }

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    
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

    OddDisplay(ptr,iCount); 

    free(ptr);
    printf("\nDynamic memory is deallocated successfully");

    return 0;
}