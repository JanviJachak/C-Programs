#include<stdio.h>

int Factorial(int iNo)
{
   
    int iCnt = 1;
    int iFact = 1;

    while(iCnt <= iNo)
    {
        iFact = iCnt * iFact;
        iCnt++;
        
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    iRet = Factorial(iValue);
    printf("factorial is %d  ",iRet);
    return 0;

}