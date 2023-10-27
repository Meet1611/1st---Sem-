#include <stdio.h>
#include <string.h>
int main () {
	char a[100];
	char temp;
	printf("Enter String : ");
	gets(a);
	int i;
	for (i=0; a[i]!='\0'; i++);
	int j=0;
	int len = i-1;
	while(j<len) {
		
		 temp = a[j];
		a[j] = a[len];
		a[len] = temp;
		j++;
		len--;
	}
	printf("%s",a);
	
	return 0;	
}
