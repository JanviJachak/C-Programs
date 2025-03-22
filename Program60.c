#include<stdio.h>

int AddDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        
        
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the no : ");
    scanf("%d",&iValue);

    iRet = AddDigits(iValue);

    printf("Sum of digits are : %d",iRet);


    return 0;
}