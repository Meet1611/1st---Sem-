#include <stdio.h>
int main () {
	int a;
	printf("Enter your Basic Salary");
	scanf("%d",&a);
	if (a>=10000&&a<20000) {
		float b=a+(0.2*a)+(0.8*a);
		printf("%f",b);
	}
	else if (a>=20000&&a<30000) {
		float c=a+(0.25*a)+(0.9*a);
		printf("%f",c);
	}
	else if (a>=30000) {
		float d=a+(0.3*a)+(0.95*a);
		printf("%f",d);
	}
}
