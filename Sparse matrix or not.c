#include <stdio.h>
int main () {
	int m,n,i,j,count0=0,count=0;
	printf("Enter rows of matrix : ");
	scanf ("%d",&m);
	printf("Enter column of matrix : ");
	scanf ("%d",&n);
	int arr[m][n];
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf ("%d",&arr[i][j]);
			if (arr[i][j] == 0) {
				count0++;
			}
			else {
				count++;
			}
		}
	}
	if (count0 > count) {
		printf("It is Sparse matrix");
	} 
	else {
		printf("It si not Sparse matrix");
	}
}
