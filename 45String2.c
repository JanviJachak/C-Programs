#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter Your Name : ");
    scanf("%s",Arr);  //Arr = &Arr

    printf("Your Name is : %s\n",Arr);


    return 0;
}