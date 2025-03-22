#include<stdio.h>

int SumFactorsI(int iNo)
{
    int  iCnt = 1;
    int iSum = 0;

    while(iCnt<= (iNo/2))
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum+iCnt;
        }
        iCnt++;
    }

            return iSum;

}

int SumFactorsR(int iNo)
{
    static int  iCnt = 1;
    static int iSum = 0;

    while(iCnt<= (iNo/2))
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum+iCnt;
        }
        iCnt++;
        SumFactors(iNo);
    }

            return iSum;

}
int main()
{
    int iValue = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    int iRet = SumFactorsR(iValue);
    printf("Addition is : %d",iRet);
    return 0;

}