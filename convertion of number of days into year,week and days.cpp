#include<stdio.h>
int main () {
	int d,y,yr,w,wr;
	printf("Enter number of Days : ");
	scanf("%d",&d);
	y=d/365;
	yr=d%365;
	w=yr/7;
	wr=yr%7;
	printf("%d year,%d week and %d days",y,w,wr);
	return 0;	
}
