#include<stdio.h>

float DisplayGreater(int iNo1, int iNo2)
{

    if(iNo1 > iNo2)
    {
        return iNo1;
    }
   
    else
    {
        return iNo2;
    }
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    int iRet=0;

    printf("Enter the first number : ");
    scanf("%f",&iValue1);

    printf("Enter the second number : ");
    scanf("%f",&iValue2);

    iRet= DisplayGreater(iValue1,iValue2);

    printf("%d is Greater",iRet);
}