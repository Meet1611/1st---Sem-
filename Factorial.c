#include <stdio.h>
int main () {
	int a,i,ans;
	printf("Enter a number");
	scanf("%d",&a);
	for (i=1;i<=a;i++) {
		ans = ans*i;
	}
	printf("%d",ans);
}
