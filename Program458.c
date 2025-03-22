//head recurssion

#include<stdio.h>


void DisplayR(int iNo)
{
    

    if(iNo>=1)
    {
        DisplayR(iNo-1);
        printf("%d\n",iNo);
        
    }
}

int main()
{
    DisplayR(3);

    return 0;
}