#include <stdio.h>
int main () {
      char A;
      printf("Enter any small alfabet :");
      scanf("%c",&A);
      if (A=='a'||A=='i'||A=='o'||A=='e'||A=='u') {
                printf("%c Alfabet is Vovel",A);
      }
      else {
                printf("%c Alfabet is consonant",A);
      } 
}
