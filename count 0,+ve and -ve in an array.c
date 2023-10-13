#include <stdio.h>
int main () {
	int m,n,i,j,count0=0,count1=0,count2=0;
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
			if (arr[i][i]==0) {
				count0++;
			}	
			else if (arr[i][j]>0) {
				count1++;
			}
			else if (arr[i][j]<0) {
				count2++;
			}
		}
	}
	printf("Total number of Positive,Negative and zeroes in array are %d %d %d",count1,count2,count0);
	return 0;
}
