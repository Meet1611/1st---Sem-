#include <stdio.h>
int main () {
    int b ;
    printf("Enter a number ");
    scanf("%d",&b);
    int x = b % 7;
    if (x==0) {
    	printf("Monday");
	}
	else if (x==1) {
		printf("Tuesday");
	}
	else if (x==2) {
		printf("wednesday");
	}
	else if (x==3) {
		printf("thursday");
	}
	else if (x==4) {
		printf("Friday");
	}
	else if (x==5) {
		printf("Sturday");
	}
	else (x==6) ;{
		printf("Sunday");
	}
}
