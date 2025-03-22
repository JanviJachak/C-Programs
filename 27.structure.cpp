#include<stdio.h>

struct demo
{
	int i;
	char ch;
	float f;
	double d;
};

int main()
{
	struct demo obj;
	
	printf("size of object is: %lu",sizeof(obj));
	return 0;
}
