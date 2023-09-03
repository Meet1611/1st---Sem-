#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	float r,x,y;
	printf("Enter three coefficient of Quadratic Equation");
	scanf("%d %d %d",&a,&b,&c);
	r=(b*b)-(4*a*c);
	if (r>0) {
		(x=((-b)+sqrt(r))/(2*a)) && (y=((-b)-sqrt(r))/(2*a));
		printf("Roots are real and the roots are ");
		printf("%f %f",x,y);
	}
	else if (r<0) {
		printf("Roots are Imainary");
	} 
	else {
		printf("There are no roots");
	}
	return 0;
}
