#include <stdio.h>
int main () {
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	int i=0;
	while (a!=0) {
		if (a>=1000) {
			printf("M");
			a-=1000;
		}
		else if (a>=900 && a<1000) {
			printf("CM");
			a-=900;
		}
		else if (a>=500 && a<900) {
			printf("D");
			a-=500;
		}
		else if (a>=400 && a<500) {
			printf("CD");
			a-=400;
		}
		else if (a>=100 && a<400) {
			printf("C");
			a-=100;
		}
		else if (a>=90 && a<100) {
			printf("XC");
			a-=90;
		}
		else if (a>=50 && a<90) {
			printf("L");
			a-=50;
		}
		else if (a>=40 && a<50) {
			printf("XL");
			a-=40;
		}
		else if (a>=10 && a<40) {
			printf("X");
			a-=10;
		}
		else if (a>=9) {
			printf("IX");
			a-=9;
		}
		else if (a>=5 && a<9) {
			printf("V");
			a-=5;
		}
		else if (a>=4) {
			printf("IV");
			a-=4;
		}
		else if (a>=1 && a<4) {
			printf("I");
			a--;
		}
	}
}
