#include <stdio.h>
#include <math.h>

int main () {
	
	int e,c,a,b,d,count=0;
	printf("Enter any number : ");
	scanf("%d",&a);
	int i;
	d=a;
	e=0;
	
	while (d!=0) {
		
		b=d%10;
		d=d/10;
		count++;
	}
	
	while (count>0) {
		
		c=a%10;
		a=a/10;
		e=e+(c*(pow(10,count-1)));
			
		count--;
	}
	
	while (e!=0) {
		i=e%10;
		e=e/10;
		switch (i) {
			case 0 : printf("Zero ");
					break; 
			case 1 : printf("One ");
					break;
			case 2 : printf("Two ");
					break;
			case 3 : printf("Three ");
					break;
			case 4 : printf("Four ");
					break;
			case 5 : printf("Five ");
					break;
			case 6 : printf("Six ");
					break;
			case 7 : printf("Seven ");
					break;
			case 8 : printf("Eight ");
					break;
			case 9 : printf("Nine ");
					break;
		}
	}	

	return 0;
}
