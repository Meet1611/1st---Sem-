#include <stdio.h>
int main () {
	int a,b,c,d,e,p;
	printf("Enter your five subjects marks : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	if (p<35) {
		printf("You are fail");
	}
	else if (p>34 && p<46) {
		printf("you are in pass class");
	}
	else if (p>45 && p<61) {
		printf("you are in second class");
	}
	else if (p>60 && p<71) {
		printf("you are in first class");
	}
	else if (p<70) {
		printf("Distinct");
	}
	return 0;
		
	
}
