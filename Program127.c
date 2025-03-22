


#include<stdio.h>

void Display(char str[]) //str* = str[]
{
    printf("String is :  %s\n",str);
}

int main()
{
    char Arr[20];

    printf("Enter thr string:\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}