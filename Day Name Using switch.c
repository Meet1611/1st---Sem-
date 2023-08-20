#include <stdio.h>
int main () {
    int b ;
    printf("Enter a number ");
    scanf("%d",&b);
    int x = b % 7;
    switch (x) {
        case 1 :  
             printf("day is Monday");
             break;
        case 2 : 
             printf("day is Tuesday");
             break;
        case 3 : 
             printf("day is Wednesday");
             break;
        case 4 : 
             printf("day is Thursday");
             break;
        case 5 : 
             printf("day is Friday");
             break;
        case 6 : 
             printf("day is Saturday");
             break;
        case 0 : 
             printf("day is Sunday");
             break;                              
    }
}
