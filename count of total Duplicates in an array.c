#include <stdio.h>
int main () {
	int n,i,j,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	
	for (i=0; i<n-1; i++) {
		for (j=0; j<n-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	int count = 0;
	
	for (i=0; i<n-1; i++) {
		if (arr[i] == arr[i+1])
			count++;
	}
	
	printf("Total number of Duplicates are %d",count);
	return 0;
}
