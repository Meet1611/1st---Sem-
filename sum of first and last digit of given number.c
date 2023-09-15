#include <stdio.h>
int main () {
	int a;
	printf("Enter any number : ");
	scanf("%d",&a);
	int i=0,count=0,d=a;
	int c=a%10;
	while(a>0){
		int b=a%10;
		a=a/10;
		i++,count++;
	}
	while(count>1) {
		d=d/10;
		count--;
	}
	printf("%d",d+c);
	return 0;
}
