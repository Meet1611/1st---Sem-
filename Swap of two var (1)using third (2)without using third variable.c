#include <stdio.h>
int main () {
	// Using third variable 
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	c=b,b=a,a=c;
	printf("%d %d\n",a,b);
	
	
	//without using third variable
	int e,d;
	printf("Enter two numbers");
	scanf("%d %d",&e,&d);
	e=e+d,d=e-d,e=e-d;
	printf("%d %d",e,d);
	

}
