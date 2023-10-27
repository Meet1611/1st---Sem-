#include <stdio.h>
int Factorial(int n) {
	if (n==1) return n;
	int i = n * Factorial(n-1);
	return i;
}
int main () {
	int n;
	printf("Enter any nuumber : ");
	scanf("%d",&n);
	int ans = Factorial(n);
	printf("Factorial of number is %d",ans);
}
