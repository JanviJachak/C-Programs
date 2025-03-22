#include<stdio.h>

int FactorialR(int iNo)
{
   
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <= iNo)
    {
        iFact = iCnt * iFact;
        iCnt++;
        FactorialR(iNo);
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    iRet = FactorialR(iValue);
    printf("factorial is %d  ",iRet);
    return 0;

}