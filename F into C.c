#include <stdio.h>
int main () {
	int C,F;
	printf("Enter temperature in F");
	scanf("%d",&F);
	C = ((F-32)*5)/9;
	printf("%d",C);

}
