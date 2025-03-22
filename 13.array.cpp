#include<stdio.h>

int main ()
{
    int arr[4]={11,21,51,101};	
	
	printf("base add of array %d \n",arr);
	
	printf("base add of 1st elementof array %d \n", &(arr[0]));
	
	printf("add of second elemnt %d", &arr[1]);
	
	printf("1st elemrnt is %d \n",arr[0]);
	
	printf("size of whole array %d\n",sizeof(arr));
	
	printf("size of second element %d \n",sizeof(arr[1]));
	
	
	return 0;
}
