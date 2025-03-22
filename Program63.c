#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int iCopy = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev =(iRev*10)+iDigit;
    }

    if(iCopy == iRev)
    {
        return true;
    }

    else{
        return false;
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the no : ");
    scanf("%d",&iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("%d is Palindrome",iValue);
    }

    else
    {
        printf("%d is not palindrome",iValue);

    }


    return 0;
}