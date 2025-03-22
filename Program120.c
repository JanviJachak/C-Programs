//Check if character is small or not using charcters

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char letter)
{
    if((letter>='a') && (letter<= 'z'))
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

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("Character is small");
    }

    else
    {
        printf("Character is not small");
    }


    return 0;
}