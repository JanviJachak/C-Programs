
//count length of string

#include<stdio.h>

int strlenX(char str[]) 
{
    int iCnt = 0;

    while(*str != '\0') //we cant use str[] here to access the data we have to use *str
    {
        iCnt++;
        str++;
    }

    return iCnt++;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter thr string:\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Length is : %d",iRet);

    return 0;
}