#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1 ; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Ganesh \n");
    }

}

int main()
{   
    int iValue1=0;

    printf("Enter no of times you want to diplay");
    scanf("%d",&iValue1);
    
    display(iValue1);

    return 0;
}