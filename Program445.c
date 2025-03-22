#include<stdio.h>

void FactorsI(int iNo)
{
    int  iCnt = 1;

    while(iCnt<= (iNo/2))
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }


}
void FactorsR(int iNo)
{
    static int  iCnt = 1;

    if(iCnt<= (iNo/2))
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(iNo);
    }


}


int main()
{   
    int iValue = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    FactorsR(iValue);
}