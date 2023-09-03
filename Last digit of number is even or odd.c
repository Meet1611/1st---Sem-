#include <stdio.h>
int main (){
	int a,b;
	printf("Enter any number : ");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0) {
		printf("last digit is Even ");
	}
	else {
		printf("Last digit is Odd ");
	}
}
