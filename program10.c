#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNum)
{   
    
    if((iNum %2)== 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}
int main()
{
   auto int iNo=0;
   bool bRet = false;

   printf("Enter the no : \n");
   scanf("%d",&iNo);


   bRet = CheckEven(iNo);

if(bRet == true)
{
    printf("%d this no is even",&iNo);
}

 else
 {
        printf("%d this no is odd",&iNo);

 } 

return 0;
}