#include <stdio.h>
int main () {
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	if (a>b) {
		printf("%d",a);
		printf(" is largest");
	}
	else {
		printf("%d",b);
		printf(" is largest");
	}

}
