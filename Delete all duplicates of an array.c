#include <stdio.h>
int main (){
	int n,temp,k;
	printf("Enter size of Array : ");
	scanf ("%d",&n);
	int i,j,arr[n];
	int size = sizeof(arr)/sizeof(arr[0]);
	for (i=0; i<n; i++) {
		scanf ("%d",&arr[i]);
	}
	for (i=0; i<size; i++) {
		for (j=i+1; j<size; j++) {
			if (arr[i]==arr[j]) {
				for (k=j; k<n-1; k++) {
					arr[k]=arr[k+1];
				} 
				size--;
				j--;
			}
		}
	}
	for (i=0; i<size; i++) {
		printf("%d",arr[i]);
	}
	return 0;
}
