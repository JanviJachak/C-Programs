#include<stdio.h>

void DisplayClass( float fMarks)
{  
   if((fMarks < 0) || (fMarks > 100.00))  //filter
   {
    printf("Invalid Marks");
   }
   
   if((fMarks >=0) && (fMarks< 35.00))
   {
     printf(" you are fail ");     

   }
    else if((fMarks >=35.00) && (fMarks< 50.00))
   {
      printf("you are passed with pass class"); 
   }
   else if((fMarks >=50.00) && (fMarks< 60.00))
   {
    printf(" you are passed with second class"); 
   }
   else if((fMarks >=60.00) && (fMarks< 75.00))
   {
     printf("you are passed with  first class");   
   }
   else if((fMarks >=75.00) && (fMarks< 100.00))
   {
     printf("you are passed with first class with distinction");   
   }
}
int main()
{
   float fValue = 0.0f;

   printf("Enter the percentage :");
   scanf("%f",&fValue);

   DisplayClass(fValue);


    return 0;
}