#include <stdio.h>
int main () {
	int n,i,j,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n],copy[n];
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		copy[i] = arr[i];
	}
	
	
	return 0;
}
