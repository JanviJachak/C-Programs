//Display Ascii value in decimal


#include<stdio.h>

int main()
{
    char ch ='\0';

    printf("Enter the character: ");
    scanf("%c",&ch);

    printf("ASCII value of %c is %d",ch,ch);

    return 0;
}