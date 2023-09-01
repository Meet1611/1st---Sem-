#include <stdio.h>
int main () {
	int a,b,c;
	printf("Enter Height of Triangle ");
	scanf("%d",&a);
	printf("Enter Base of Triangle ");
	scanf("%d",&b);
	printf("Enter Hypotenuse of Triangle ");
	scanf("%d",&c);
	if(a==b && b==c && c==a) {
		printf("Triangle is Equilateral");
	}
	else {
			if (a==b || b==c ||c==a) {
		printf("Triangle is Isosceles");
	        }
	        else if ( ((a*a)+(b*b)) == (c*c) ) {
	        	printf("Triangle is Scalene");
			}
	}
	return 0;
} 
