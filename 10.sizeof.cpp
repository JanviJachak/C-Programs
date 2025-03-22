#include<stdio.h>

int main()
{
	char ch='a';
	int i= 21;
	float f=23.44;
	double d=23.3232;
	
	printf("size of ch is : %d \n" , sizeof(ch)); //1
	printf("size of i is : %d \n", sizeof(i));  //4
	printf("size of f is : %d \n", sizeof(f));  //4
	printf("size of d is : %d \n", sizeof(d));  //8
	
	printf("base add of ch is : %d \n" ,&ch); 
	printf("base add i is : %d \n", &i);  
	printf("base add of f is : %d \n", &f);  
	printf("base add of d is : %d \n", &d);
	
	return 0;
}
