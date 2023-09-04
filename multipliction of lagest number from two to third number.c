#include <stdio.h>
int main () {
	int a,b,c;
	printf("Enter any Three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?printf("%d",a*c):printf("%d",b*c);
}
