#include<stdio.h>


void Displayfactors(int iNo)
{
    int iCnt = 0;

    printf("factors of %d are \n",iNo);

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  //reduced time complexity
    {
        if (iNo % iCnt == 0)
        {
            printf("%d \n",iCnt);
        }
    }


}
int main()
{   int iValue = 0;

    printf("enter the number : ");
    scanf("%d",&iValue);

    Displayfactors(iValue);
    return 0;
}

//time complexity :O(N/2)