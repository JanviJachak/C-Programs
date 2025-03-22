//Check if character is capital or not using ascii value

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char letter)
{
    if((letter>=65) && (letter<= 90))
    {
        return true;
    }

    else
    {

        return false;
    }
}

int main()
{
    char ch ='\0';
    bool bRet = false;

    printf("Enter the Character: ");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("Character is capital");
    }

    else
    {
        printf("Character is not capital");
    }


    return 0;
}