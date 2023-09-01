#include <stdio.h>
int main () {
	int a;
	printf("Enter Month number (1-12) : ");
	scanf("%d",&a);
	switch (a) {
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
	    case 10 :
	    case 12 : printf("31 Days");
	             break;
	    case 4 :
		case 6 :
		case 9 :
		case 11 : printf("30 days");
		         break;
	    case 2 : printf("28 Days");
				break;
	    default : printf("Invalid Input");
				break;        
	}
	return 0;
}
