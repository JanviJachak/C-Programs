#include<stdio.h>

int main()
{
	int no = 11;
	int *p = &no;
	
	printf("no %d \n",no);
	printf("&no %d\n",&no);
	printf(" size of no %d\n",sizeof(no));
	
	
	printf("p %d\n",p);
	printf("&p %d\n",&p);
	printf("*p %d\n",*p);
	printf("size of p %d\n",sizeof(p));
	
	
	return 0;
}
