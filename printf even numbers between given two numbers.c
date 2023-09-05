#include <stdio.h>
int main (){
	int a,b;
	printf("Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	if (a>b) {
		int i=b;
		while (i<=a) {
			if(i%2==0) {
				printf(" %d\n",i);
			}
			i++;
		}
	}
	else {
		int i=a;
		while (i<=b){
			if (i%2==0) {
				printf(" %d\n",i);
			}
			i++;
		}
	}
	return 0;
}
