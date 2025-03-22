#include<stdio.h>

# pragma pack(1)  //it will avoid memory loss that is no padding will be there

struct demo
{
	int i;
	char ch;
	float f;
	int d;
};

int main()
{
	struct demo obj;
	
	printf("size of object is: %lu",sizeof(obj)); //17
	return 0;
}
