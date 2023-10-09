#include <stdio.h>
int main () {
	int n,i,j,start,end,mid,target,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter Target : ");
	scanf("%d",&target);
	
	for (i=0; i<n-1; i++) {
		for (j=0; j<n-1; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	start = 0,end=n-1;
	mid = end + (start - end)/2;
	
	while(start<end) {
		if (arr[mid] == target) {
			break;
		}
		else if (arr[mid] < target) {
			start = mid + 1;
		}
		else  {
			end = mid - 1;
		}
		mid = end + (start - end)/2;
	}
	
	printf("Target is found at index %d",mid);
	return 0;
}
