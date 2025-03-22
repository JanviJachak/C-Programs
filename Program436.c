#include<stdio.h>


void DisplayR()
{
    int iCnt = 1;

    if(iCnt<=4)
    {
        printf("Jay Ganesh....\n");
        iCnt++;
        DisplayR();
    }


}

int main()
{

    DisplayR();

    printf("End of application");
    return 0;
}