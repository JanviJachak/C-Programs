#include<stdio.h>
#include<stdlib.h> //for mallo and free

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;
    
    printf("Enter the no of elements :  ");
    scanf("%d",&iCount);

    ptr = (int*) malloc(iCount* sizeof(int));

    printf("Enter the elements : \n ");

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    } 

    printf("Your Entered elements are : \n ");

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);

    }  
    printf("\n");

    return 0;
}

//ctrl+c to abort myexe