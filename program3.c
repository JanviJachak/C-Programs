// Problem Statement : Accept 2 values from user and perform the addition.

// Step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition.

// Step 2 : Write the algorithm
/*
    START
        Accept first number from user and store it into no1
        Accept second number from user and store it into no2
        Create one variable to store the result named as Ans
        Perform Addition of no1 and no2, store the result in Ans
        Display the result from Ans to the user
    STOP
*/

// Step 3: Decide the programming language (C/C++/Java/Python)
// We select C programming

// Step 4: Write the program

//problem statment : Accept two nos from user and perform the addition

#include<stdio.h>

int main()
{
    int i,j,k;

    printf("enter first no");
    scanf("%d",&i);

    printf("enternsecond no");
    scanf("%d",&j);

    k=i+j;

    printf("addition is : %d",k);
    return 0;
}