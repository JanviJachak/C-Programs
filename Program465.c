#include<stdio.h>

int EvenDisplay(int Arr[],int iSize)
{
    int iCnt = 0;
    int iCount=0;

    while(iCnt<iSize)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
        iCnt++;
        
    }
    return iCount;
    
}


int main()
{
    int Arr[6] = {10,11,12,13,14,15};

    int iRet =EvenDisplay(Arr,6);
    printf("%d",iRet);

    return 0;
}