#include<stdio.h>

int main()
{
	float radius=0.0f;
	 const float pi=3.14f;
	float area = 0.0f;
	
	printf("Radius : ");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	printf("area of circle is : %f",area);
	return 0;
}
