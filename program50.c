#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum=0;

    if(iNo < 0)   //updator: it will change negative no to positive
    {
        iNo = -iNo;
    }


    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  
    {
        if (iNo % iCnt == 0)
        {
            
            iSum=iSum+iCnt;

        }

    }

    if(iSum == iNo)
    {
        return true;
    }

   else
   {
       return false;
   } 
  
}

int main()
{   int iValue = 0;
    int iRet=0;
    bool bRrt=false;

    printf("enter the number : ");
    scanf("%d",&iValue);

    iRet=CheckPerfect(iValue);
    

    if(iRet == true)
    {
        printf("%d is perfect no",iValue);
    }
    else
    {
        printf("%d is not a perfect no",iValue);
    }

    
    return 0;
}

