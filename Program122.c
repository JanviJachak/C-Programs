//Take input SMAll return that letter in CAPITAL


#include<stdio.h>


char ConvertSmall(char cLetter)
{
   
   return cLetter-32;
}

int main()
{
    char ch ='\0';
    char cRet = '\0';

    printf("Enter the Character: ");
    scanf("%c",&ch);

    cRet = ConvertSmall(ch);

    printf("Converted letter is : %c\n",cRet);

    
     return 0;
}