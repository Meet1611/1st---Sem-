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
		printf("%d\n",i);
	}	

	return 0;
}
