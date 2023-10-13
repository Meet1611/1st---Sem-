#include <stdio.h>
int main () {
	int m,n,i,j,temp;
	printf("Enter Square matrix\n");
	printf("Enter rows of array : ");
	scanf("%d",&m);
	printf("Enter column of array : ");
	scanf ("%d",&n);
	int arr[m][n];
	printf("Enter elements of first matrix : \n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0; i<m; i++) {
		for (j=i; j<n; j++) {
			temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	printf ("Transposed matrix : \n");
	for (i=0; i<m; i++) {
		for (j=0; j<n; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
