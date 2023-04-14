#include <stdio.h>

int main()
{
    float a, b;
    char c;

    printf("Enter the first number = ");
    scanf("%g", &a);

    printf("Enter the second number = ");
    scanf("%g", &b);

    printf("Enter the arithmetic operation icon (+, -, *, /) = ");
    scanf(" %c", &c);

    if (c == '+')
    {
        printf("%g + %g = %g", a, b, a + b);
    }
    else if (c == '-')
    {
        printf("%g - %g = %g", a, b, a - b);
    }
    else if (c == '*')
    {
        printf("%g * %g = %g", a, b, a * b);
    }
    else if (c == '/')
    {
        printf("%g / %g = %g", a, b, a / b);
    }
    else {
        printf("Error: please only enter an arithmetic operation icon");
    }

    return 0;
}