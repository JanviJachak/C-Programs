#

#include<stdio.h>


int Sumfactors(int iNo)
{
    int iCnt = 0;
    int iSum=0;


    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  //reduced time complexity
    {
        if (iNo % iCnt == 0)
        {
            
            iSum=iSum+iCnt;

        }

    }
  
    return iSum;

}
int main()
{   int iValue = 0;
    int iRet=0;

    printf("enter the number : ");
    scanf("%d",&iValue);

    iRet=Sumfactors(iValue);
    

    printf("Sum of factors is: %d",iRet);
    
    return 0;
}

//time complexity :O(N/2)