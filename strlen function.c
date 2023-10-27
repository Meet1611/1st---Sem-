#include <stdio.h>
#include <string.h>
int main () {
	char a[100];
	int i=0,len=0;
	printf("Enter String : ");
	gets(a);
	while(a[i]!='\0') {
		len++,i++;
	}
	printf("Length of String is %d",len);
}
