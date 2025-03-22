#include<stdio.h>

void display()
{
	int no = 11;       // auto
	int i;             //auto
	auto int j =  21;
	
	printf("value of no %d \n",no);
	printf("value of i %d \n",i);
	
	//life time and scope of i no and j is within this function only
}


int main()

{
	display();
	
  	// printf("%d",no)   // it will give error as no is declared in display so its scope is only within display function
	
	return 0;
}
