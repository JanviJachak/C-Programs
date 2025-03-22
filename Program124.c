// Display whole string using gets()


#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter thr string:\n");
    gets(Arr);

    printf("Entered string is : %s\n",Arr);

    return 0;
}

//problem with gets() is it  doesnt know where to stop in above program string should accept only 20 characters but using gets() it will take more than 20