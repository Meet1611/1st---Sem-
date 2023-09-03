#include<stdio.h>
int main () {
	int a,b;
	char c;
	printf("Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	printf("Enter what you have to perform (*(Multiplication)/-(Subtraction)/+(Addition)/'/'(Division)");
	scanf(" %c",&c);
	if (c=='+') {
		printf("%d",a+b);
	}
	else if (c=='-') {
		printf("%d",a-b);
	}
	else if (c=='*') {
		printf("%d",a*b);
	}
	else if (c=='/') {
		printf("%d",a/b);
	}
	return 0;
}
