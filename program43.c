#include<stdio.h>
#include<stdbool.h>


bool Checkfactor (int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
        return true ;
    }

    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet= false;

    printf("Enter first no : \n");
    scanf("%d",&iValue1);

    printf("Enter second no : \n");
    scanf("%d",&iValue2);

    bRet = Checkfactor(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is a factor of %d\n",iValue2,iValue1);
    }

   else
   {
      printf("%d is not factor of %d\n",iValue2,iValue1);
   } 

   return 0;
}
