#include<stdio.h>
#include<stdbool.h>

bool checkprime(int iNo)
{
    int iCnt=0;
    bool bFlag = true;

    if(iNo  < 0)  //updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2);  iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
          bFlag = false;
          break;
        }
         
    }

    return bFlag;
  
}

int main()
{

    int iValue=0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = checkprime(iValue);


    if(bRet == true)
    {

        printf("%d is a prime number",iValue);
    }

    else
    {
        printf("%d is not a prime no",iValue);
    }

}