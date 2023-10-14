#include<stdio.h>
#include<limits.h>
int main () {
	int n;
	printf("Enter size of array : ");
	scanf ("%d",&n);
	int arr[n],i,max=INT_MIN;
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}	
	}
	int max1=arr[0];
	for (i=0; i<n; i++) {
		if (arr[i] > max1 && arr[i] < max) {
			max1 = arr[i];
		}
	}
	printf("largest number is %d\n",max);
	printf("second largest number is %d",max1);
}
