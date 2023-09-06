#include <stdio.h>
int main () {
	int b=0,c=0;
	printf("Enter any Ten Numbers : \n");
	int a,i=1;
	while (i<=10){
		printf("Enter your %d number : ",i);
		scanf("%d",&a);
		if (a%2==0) {
			b++;
			printf("Total even numbers are %d\n",b);
		}
		else {
			c++;
			printf("Total odd numbers are %d\n",c);
		}
		i++; 
	}
	return 0;
	
}
