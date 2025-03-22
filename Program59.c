#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the no : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("No of digits are : %d",iRet);


    return 0;
}