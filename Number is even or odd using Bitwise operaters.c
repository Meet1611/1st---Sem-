#include <stdio.h>
int main () {
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	if (a==(a>>2)<<2){
		printf("Number is Even");
	}
	else{
		printf("Number is odd");
	}
	return 0;
}
