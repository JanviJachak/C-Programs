#include<stdio.h>

union demo
{
	int i;
	char ch;
	float f;
	double d;
};

int main()
{
	union demo obj;
	
	printf("size of object is: %d",sizeof(obj)); // 8 (max size is 8)
	return 0;
}
