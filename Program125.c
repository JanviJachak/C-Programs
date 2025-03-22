//scanf("%[^'\n']s",Arr); this will also accept more than 20 char

#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter thr string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Entered string is : %s\n",Arr);

    return 0;
}