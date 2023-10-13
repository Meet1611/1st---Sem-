#include <stdio.h>
#include <string.h> 
int main (){
	char a[100];
	printf("Enter String : ");
	gets(a);
	int i=0,count = 0;
	while (a[i]!='\0') {
		printf("%c",a[i]);
		count++;
		i++;
	}
	printf("\nLength of string is %d",count);
	return 0;
}
