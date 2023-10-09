#include <stdio.h>
int main () {
	int n,i,count=0;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		if (arr[i] % 3 == 0)
			count ++;
	}
	printf ("There are %d negative numbers in an array",count);
	
	return 0;
}
