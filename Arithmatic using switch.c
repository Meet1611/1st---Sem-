#include <stdio.h>
int main () {
	char ch;
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	printf("Enter what you have to perform (Addition'+'/Subtraction'-''/Multiplication'*''/Division '/') ");
	scanf(" %c",&ch);
	switch (ch) {
		case '+' : printf("%d",a+b);
		break;
		case '-' : printf("%d",a-b);
		break;
		case '*' : printf("%d",a*b);
		break;
		case '/' : printf("%d",a/b);
		break;
		
	}
	return 0;
}
