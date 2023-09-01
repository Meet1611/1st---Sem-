#include <stdio.h>
int main () {
	int a,b,c;
	printf("Enter Three sides of Triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c && c==a) {
		printf("Triangle is Equilateral");
	}
	else {
			if (a==b || b==c ||c==a) {
		printf("Triangle is Isosceles");
	        }
	        else {
	        	printf("Triangle is Scalene");
			}
	}
	return 0;
}
