#include <stdio.h>
int main () {
	int m,n,i,j;
	printf("Enter rows of array : ");
	scanf("%d",&m);
	printf("Enter column of array : ");
	scanf ("%d",&n);
	int arr[m][n];
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
