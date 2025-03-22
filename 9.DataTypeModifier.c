#include<stdio.h>

int main()
{
	int i= 10;           //1  by default signed
	signed int j = 30;   //2  this three can store positive or negative both
	signed int k = -90;  //3 
	
	unsigned int a = 40; //
	unsigned int b = -8; // its not allowed to store negative as its unsigned
	
	printf("%d , %d , %d , %d, %d", i, j,k,a,b);
	
	int x = 10;       //4bytes
	short int y=10;   //2bytes
	long int z = 20;  //8bytes
	
	printf("Size of : ");
	printf("%d , %d, %d", sizeof(x),sizeof(y),sizeof(z));
	
	return 0;
}

/*
 When you pass an unsigned int to printf with the %d specifier, the function doesn't know that the value is unsigned, so it interprets the bits as a signed int.
This is why you're seeing -8 printed: the bit pattern of 4294967288 (the unsigned representation of -8) is being interpreted as a signed int, which gives you back -8
*/