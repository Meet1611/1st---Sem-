#include <stdio.h>
int main () {
	int a,b,c;
	printf("Enter any Three Numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) {
		if (a>c) {
			printf("%d is Second Largest",c);
		}
		else {
			printf("%d is Second Largest",a);
		}
	}
	else {
		if (b>c) {
			printf("%d is Secomd largest",c);
		}
		else {
			printf("%d id Second largest",b);
		}
	}
}
