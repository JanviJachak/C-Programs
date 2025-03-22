#include<stdio.h>

int SumDisplay(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    while(iCnt<iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        
    }
    return iSum;
    
}


int main()
{
    int Arr[5] = {10,20,30,40,50};

    int iRet =SumDisplay(Arr,5);
    printf("Sum of elelmts of array is %d : ",iRet);

    return 0;
}