#include <stdio.h>
#include <string.h>
int main () {
	char a[100],b[100];
	int x,i=0,j=0,len1=0,len2=0;
	printf("Enter first String : ");
	gets(a);
	printf("Enter second String : ");
	gets(b);
	while(a[i]!='\0') {
		len1++,i++;
	}
	while(b[j]!='\0') {
		len2++,j++;
	}
	if(len1==len2) {
		i=0;
		while(a[i]!='\0') {
			if(a[i]!=b[i]) {
				i=1;
				break;
			}
			i++;
		}
		if(i==1) {
			printf("Strings are not same\n");
		}
		else {
			printf("Strings are same\n");
		}
	}
	else {
		printf("Strings are not same\n");
	}
}
