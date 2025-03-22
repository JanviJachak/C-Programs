#include<stdio.h>

struct demo
{ int *p;
  float *q;
  double d;
	
};

int main()

{ 
  struct demo obj;
  int i=11;
  float f=90.90;
  
  obj.p=&i;
  obj.q=&f;
  obj.d=90.9990;
  
  printf("%d\n",*(obj.p));
  printf("%f\n",*(obj.q));
}




