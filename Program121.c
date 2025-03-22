//Take input CAPITAL return that letter in SMAll


#include<stdio.h>


char ConvertCapital(char cLetter)
{
   
   return cLetter+32;
}

int main()
{
    char ch ='\0';
    char cRet = '\0';

    printf("Enter the Character: ");
    scanf("%c",&ch);

    cRet = ConvertCapital(ch);

    printf("Converted letter is : %c\n",cRet);

    
     return 0;
}