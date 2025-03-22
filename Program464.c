#include<stdio.h>

int SumR(int Arr[],int iSize)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt<iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        SumR(Arr,iSize);
        
    }
    return iSum;
    
}


int main()
{
    int Arr[5] = {10,20,30,40,50};

    int iRet =SumR(Arr,5);
    printf("Sum of elelmts of array is %d ",iRet);

    return 0;
}