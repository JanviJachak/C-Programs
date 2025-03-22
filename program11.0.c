#include<stdio.h>

float CalculatePercentage(int iMarks, int iOutof)
{
  auto float fPercentage = 0.0f;
  fPercentage = ((float)iMarks/(float)iOutof)*100; //typecasting int will temporarily float
  return fPercentage;

}

int main()
{
   auto int iValue1=0;
   auto int iValue2=0;
   float fRet = 0.0f;

   printf("enter the obtained marks : ");
   scanf("%d",&iValue1);

   printf("enter total marks : ");
   scanf("%d",&iValue2);
   
   fRet = CalculatePercentage(iValue1,iValue2);

   printf("percentage is : %f",fRet);


    return 0;
}