#include<stdio.h>

void Factors(int iNo)
{
    int  iCnt = 1;

    for(iCnt=1; iCnt<= (iNo/2); iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }


}


int main()
{   
    int iValue = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    DisplayI(iValue);
}