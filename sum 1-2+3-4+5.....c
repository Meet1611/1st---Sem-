#include <stdio.h>
int main () {
	int i=1,a;
	int ansEven=0,ansOdd=0;
	scanf("%d",&a);
	while (i<=a) {
		if(i%2==0) {
			ansEven-=i;
		}
		else {
			ansOdd+=i;
		}
		i++;
	}
	printf ("%d",ansOdd+ansEven);
	return 0;
}
