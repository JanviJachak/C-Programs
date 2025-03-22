#include<stdio.h>

struct demo
{
	int i;
	float f;
	int j;
};

int main()
{
	struct demo obj1;
	struct demo obj2;
	
	struct demo *ptr = NULL;
	ptr = & obj2;
	
	obj1.i=11;
	obj1.f=90.99;
	obj1.j=21;
	
	ptr->i=51;
	ptr->f=909.999;
	ptr->j=331;
	
	printf("%d\n",obj1.i);
	printf("%d\n",ptr->i);
	
	return 0;
}
