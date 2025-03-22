//problems on N number

#include<stdio.h>
#include<stdlib.h> //for malloc and free

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

    return 0;
}

//ctrl+c to abort myexe