#include<stdio.h>

void DisplayExamTime(int iStandard)
{
   
      if (iStandard == 1)
      {
      printf("your exam is at 8 Am");
      
      }
      else if (iStandard == 2)
      {
      printf("your exam is at 9 Am");
      
      }
      else if (iStandard == 3 )
      {
      printf("your exam is at 10 Am");
    }
      else if (iStandard ==4 )
      {
      printf("your exam is at 11 Am");
    }
      else if (iStandard == 5)
      {
      printf("your exam is at 12 Noon");
    }
      else 
      {
      printf("wrong input");
      }
   

   
}

int main()
{
    auto int iValue=0;

    printf("Enter the class : ");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}