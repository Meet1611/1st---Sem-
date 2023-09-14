#include <stdio.h>
int main () {
	int i=1,a;
	int ans=0;
	scanf("%d",&a);
	while (i<=a) {
		ans = ans + (i*i);
		i++;
	}
	printf ("%d",ans);
	return 0;
}
