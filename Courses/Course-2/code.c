#include <stdio.h>

int main(){

    int sayi;

    printf("Enter a number: ");
    scanf("%d", &sayi);

    if(sayi % 2 == 0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }






    return 0;
}