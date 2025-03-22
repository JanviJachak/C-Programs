#include<stdio.h>

long int calculate_cube(int iValue)
{

   auto long int iAns=iValue*iValue*iValue;

   return iAns;
}

int main()
{
    auto int iNo=0;
    auto long int iCube = 0;

    printf("Enter the number : ");
    scanf("%d",&iNo);

    iCube=calculate_cube(iNo);
    printf("Cube of no is : %ld ",iCube);

    return 0;
}