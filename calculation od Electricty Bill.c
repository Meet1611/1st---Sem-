#include <stdio.h>
int main () {
	int a;
	float am;
	printf("Enter your electricity bill ");
	scanf("%d",&a);
	if (a<=50) {
		am=(0.5*a);
		am=(0.2*am)+am;
		printf("%f",am);
	}
	else if (a<=150) {
		am=(0.5*a)+(0.75*a);
		am=(0.2*am)+am;
		printf("%f",am);
	}
	else if (a<=250) {
		am=(0.5*a)+(0.75*a)+(1.2*a);
		am=(0.2*am)+am;
		printf("%f",am);
	}
	else if (a>250) {
		am=(0.5*a)+(0.75*a)+(1.2*a)+(1.5*a);
		am=(0.2*am)+am;
		printf("%f",am);
	}
}
