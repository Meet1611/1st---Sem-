#include <stdio.h>
int main () {
	int m,n,i,j;
	printf("Enter rows of array : ");
	scanf("%d",&m);
	printf("Enter column of array : ");
	scanf ("%d",&n);
	int arr1[m][n],arr2[m][n];
	printf("Enter elements of first matrix : \n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements of second array : \n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf ("%d",&arr2[i][j]);
		}
	}
	printf("Sum of two matrix : \n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("%d ",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
