#include<stdio.h>


int SumDigitsR(int iNo)
{
   
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum= iSum + iDigit;
        printf("%d\n",iDigit);

        iNo = iNo/10;
    SumDigitsR(iNo);
        
    }
return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    iRet = SumDigitsR(iValue);
    printf("Sum of digits is %d : ",iRet);
    return 0;

}