#include <stdio.h>

int main()
{

     int a;

     printf("Enter a number: ");
     scanf("%d", &a);

     if(a > 0) {

         printf("The number is positive");

     }
     else if(a < 0) {

       printf("The number is negative");

     }
     else if(a != (int)a ){


      printf("Error: please enter an integer");


     }

     else {

         printf("The number is neutral");

     }

     return 0;
}