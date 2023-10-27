#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool PerfectNum(int n) {
	int i,sum=0;
	for (i=1; i<n; i++) {
		if(n%i==0) {
			sum += i;
		}
	}
	if(sum==n) {
		return true;
	}
	else {
		 return false;
	}
}
bool Prime(int n) {
	int i;
	for (i=2; i<n; i++) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}

bool Armstrong(int n) {
	int c,b=n,d=n,a,sum=0,count=0;
	while(n>0) {
		a=n%10;
		n=n/10;
		count++;
	}
	while(b>0) {
		c=b%10;
		b=b/10;
		sum = (sum*10) + pow(c,count);
	}
	if(sum==d) {
		return true;
	}
	else {
		return false;
	}
}

int main () {
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	if(PerfectNum(n)) {
		printf("Number is Perfect number\n");
	}
	if(Armstrong(n)) {
		printf("Number is Atmstrong\n");
	}
	if(Prime(n)) {
		printf("Number is Prime\n");
	}
	
	return 0;
}

