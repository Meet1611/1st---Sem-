#include <stdio.h>
int main () {
	int T,i=0,sum=0,avg;
	printf("Enter number of Test cases : ");
	scanf("%d",&T);
	while (i<T) {
		int a;
		scanf("%d",&a);
		sum+=a;
		i++;
	}
	avg=sum/T;
	printf ("Average and sum of numbers %d and %d",avg,sum);
	return 0;
}
