#include <stdio.h> 
int main () {
	
	int i,sum=0,a=0,b=1;
	printf("%d,%d,",a,b);
	for (i=0; i<13; i++) {
		int c = a + b;
		printf("%d,",c);
		a=b;
		b=c;
	}
	return 0;
}
