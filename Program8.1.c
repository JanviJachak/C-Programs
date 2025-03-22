// Problem statment : Accept radius from user and calculate the area of circle

// step 1: Undersand the problem statment
//conclusion : we are going to use formula as pi*r*r

// step 2: Algorithm
/*
   START 
   Accept the radius from the user
   Create variable as pi and store value 3.14 in it
   Calculate the area pi*r*r
   Dispaly the value of area to the user

   STOP

*/

#include<stdio.h>

//////////////////////////////////////////////////////////

//function name: calculate-area
//description:    used to calculate area of circle
//input:          float
//output:         float
//author name:    janvi kishor jachak
//date:           02/10/2023

///////////////////////////////////////////////////////////

#define pi 3.14

float calculate_area(float fR)
{
    auto float fArea=0.0f;

    fArea=pi * fR * fR;
    return fArea;
}

//////////////////////////////////////////////////////

// Entery point function

////////////////////////////////////////////////////

int main()

{   auto float fRadius=0.0f;
    auto float fAns=0.0f;

    printf("enetr the radius of a circle : ");
    scanf("%f",&fRadius);

    fAns=calculate_area( fRadius);

   printf("Area of circle is : %f",fAns);

   return 0;

}