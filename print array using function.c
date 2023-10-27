#include <stdio.h>
void Print (int arr[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
}
int main () {
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	Print(arr, n);
	return 0;
}
