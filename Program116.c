//Display Ascii values


#include<stdio.h>

int main()
{
    char ch ='\0';

    printf("Enter the character: ");
    scanf("%c",&ch);

    printf("\nASCII value of %c in DECIMAL is %d",ch,ch);
    printf("\nASCII value of %c in OCTAL is %o",ch,ch);
    printf("\nASCII value of %c in HEXADECIMAL is %x",ch,ch);

    return 0;
}