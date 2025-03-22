#include<stdio.h>
#include<stdlib.h> //for mallo and free

void Display(int Arr[] , int iSize) 
{
    int iCnt = 0;

    printf("\nElements of Array are : ");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
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

    for(iCnt = 0 ; iCnt < iCount ; iCnt++)  // O(N)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    } 

    Display(ptr,iCount); //display(100 , 4)

    free(ptr);
    printf("\nDynamic memory is deallocated successfully");

    return 0;
}

//ctrl+c to abort myexe

/*

we can also write this code statically but its not good programming practice

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements should be a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}



*/