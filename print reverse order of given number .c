#include <stdio.h>

int main () {
	
	int a,b;
	printf("Enter any number : ");
	scanf("%d",&a);
	int i=0;
	
	while (a!=0) {
		
		b=a%10;
		a=a/10;
		printf("%d",b);
		i++;
	}
	

	
	return 0;
}
