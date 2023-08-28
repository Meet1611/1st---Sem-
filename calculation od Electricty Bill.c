#include <stdio.h>
int main () {
	int a;
	float am;
	printf("Enter your electricity bill ");
	scanf("%d",&a);
	if (a<=50) {
		am=(0.5*a);
	}
	else if (a<=150) {
		am=(0.5*50)+(0.75*(a-50));
	}
	else if (a<=250) {
		am=(0.5*50)+(0.75*100)+(1.2*a-150);
	}
	else if (a>250) {
		am=(0.5*50)+(0.75*100)+(1.2*100)+(1.5*a-250);
	}
	am=(0.2*am)+am;
	printf("%f",am);
}
