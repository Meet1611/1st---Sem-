#include <stdio.h>
int main () {
	char c;
	printf("Enter any Character : ");
	scanf("%c",&c);
	if (c>='A'&&c<='Z') {
		printf("%c is Upper case",c);
	}
	else if (c>='a'&&c<='z') {
		printf("%c is Lower case",c);
	}
	else {
		printf("%c is Special Character",c);
	}
	return 0;
}
