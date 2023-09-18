#include <stdio.h>

int main () {
	
	int a;
	int count = 0;
	printf("Enter any number : ");
	scanf("%d",&a);
	int i=2;
	
	while (i<a) {
		if (a%i != 0) {
			count++;
		}
		i++;
	}
	
	if (count==0) {
		printf("%d is not Prime",a);
	}
	else {
		printf("%d is Prime",a);
	}
	
	return 0;
}
