#include <stdio.h>
#include <string.h>
int main () {
	char a[100],b[100];
	printf("Enter first String : ");
	gets(a);
	printf("Enter second String : ");
	gets(b);
	int i,j;
	for(i=0; a[i]!='\0'; i++);
	for(j=0; b[j]!='\0'; j++) {
		a[i] = b[j];
		i++;
	}
	a[i]='\0';
	printf("%s",a);
	return 0;	
}
