#include <stdio.h>
int main () {
	char c;
	printf("Enter any character : ");
	scanf("%c",&c);
	((c>='A'&& c<='Z')||(c>='a'&& c<='z'))?printf("%c is alphabet",c):printf("%c is special character",c);
	return 0;
}
