#include <stdio.h>
int main () {
	int i,j;

	int arr[4][5],arr1[4][5];
	printf("Enter roll number and marks of respective students : ");
	for (i=0; i<4; i++) {
		for (j=0; j<5; j++) {
			scanf("%d %d",&arr[i][j],&arr1[i][j]);
		}
	}
	return 0;
}
