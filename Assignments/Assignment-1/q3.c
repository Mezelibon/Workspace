#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the first number: ");

     scanf("%d", &a);

     printf("Enter the second number: ");

     scanf("%d", &b);

     printf("Enter the third number: ");

     scanf("%d", &c);

     if(a > b && a > c){

         printf("The largest number is %d", a);

     }
     else if(b > a && b > c){

         printf("The largest number is %d", b);

     }
     else if(c > a && c > b) {

         printf("The largest number is %d", c);
         
     }

     else if(a != (int) a || b != (int) b || c != (int) c){

         printf("Error: please only enter different integers");
     }

    else {

         printf("Error: please enter different integers");
    }
    return 0;
}