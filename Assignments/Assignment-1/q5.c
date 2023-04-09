#include <stdio.h>

int main()
{

    float a, b;

    printf("Enter the first decimal number: ");

    scanf("%f", &a);

    printf("Enter the second decimal number: ");

    scanf("%f", &b);

    

    if(a == (float)a || b == (float)b){

        printf("%g + %g = %g\n", a, b, a + b);

        printf("%g - %g = %g\n", a, b, a - b);

        printf("%g * %g = %g\n", a, b, a * b);

        printf("%g / %g = %g\n", a, b, a / b);
    }
    else{

        printf("Error: please only enter decimal numbers");
    }
    return 0;
}

