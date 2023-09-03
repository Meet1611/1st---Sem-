#include <stdio.h>
int main () {
	int a,b,c;
	printf("Enter base of Triangle : ");
	scanf("%d",&a);
	printf("Enter height of Triangle : ");
	scanf("%d",&b);
	printf("Enter hypotenuse of Triangle : ");
	scanf("%d",&c);
	if (a==b && b==c) {
		printf("Triangle is Equilateral");
	}
	else {
		if (a==b || b==c||a==c) {
			printf("Triangle is Isosceles");
		}
		else if ((a*a)+(b*b)==(c*c)) {
			printf("Trianle is Scalene");
		}
	}
	return 0;
}
