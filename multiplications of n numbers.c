#include <stdio.h>
int main (){
	int a,i,ans=1;
	printf("Enter how many number you want to multiply");
	scanf("%d",&a);
	for (i=1;i<=a;i++) {
		int b;
		scanf("%d",&b);
		ans=ans*b;
	}
	printf("%d",ans);
}
