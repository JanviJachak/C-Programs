// programimg paradigm 1)sequence 

//addition of two nos

#include<stdio.h>

//function
int addition(int no1,int no2)
{  int ans=0;
   ans=no1+no2;
   return ans;
}
//main function
int main()
{  
  int ret=0,val1=0,val2=0;
  
  printf("enter no1: ");
  scanf("%d",&val1);
  
  printf("enter no2: ");
  scanf("%d",&val2);
  
  
  ret=addition(val1,val2);
  printf("addition is: %d \n",ret);
  
return 0;

}
