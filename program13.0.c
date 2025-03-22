#include<stdio.h>

void DisplayExamTime(int iStandard)
{
   switch(iStandard)
   {
      case 1:
      printf("your exam is at 8 Am");
      break;
      case 2:
      printf("your exam is at 9 Am");
      break;
      case 3:
      printf("your exam is at 10 Am");
      break;
      case 4:
      printf("your exam is at 11 Am");
      break;
      case 5:
      printf("your exam is at 12 Noon");
      break;
      default:
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