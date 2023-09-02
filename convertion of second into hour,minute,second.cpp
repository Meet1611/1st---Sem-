#include<stdio.h>
int main () {
	int s,h,hr,m,mr;
	printf("Enter number of Seconds : ");
	scanf("%d",&s);
	h=s/3600;
	hr=s%3600;
	m=hr/60;
	mr=hr%60;
	printf("%d:%d:%d",h,m,mr);
	return 0;	
}
