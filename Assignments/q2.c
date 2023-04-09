#include <stdio.h>

int main()
{

     int sayi;

     printf("Enter a number: ");
     scanf("%d", &sayi);

     if(sayi > 0) {
         printf("The number is positive");
     }
     else if(sayi < 0) {
       printf("The number is negative");
     }

     else {
         printf("The number is neutral");
     }

     return 0;
}