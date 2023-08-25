#include <stdio.h>
int main () {
	int a,i;
	printf("Enter a number ");
	scanf("%d",&a);
	for (i=1;i<=a;i++) {
		int b=i%2;
		if (b==0) {
			printf("%d",i);
		}
	}
}
