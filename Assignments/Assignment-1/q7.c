#include <stdio.h>

int main()
{
    int a, b;

    char c;
    printf("Enter the first number = ");

    scanf("%d", &a);

    printf("Enter the second number = ");

    scanf("%d", &b);

    if (a != (int)a || b != (int)b)
    {

        printf("Error: please only enter integers");

        return 0;
    }

    printf("Enter the arithmetic operation icon (+, -, *, /) = ");

    scanf(" %c", &c);

    if (c == '+')

    {

        printf("%d + %d = %d", a, b, a + b);

    }
    else if (c == '-')

    {
        printf("%d - %d = %d", a, b, a - b);

    }
    else if (c == '*')
    {

        printf("%d * %d = %d", a, b, a * b);

    }
    else if (c == '/')
    {

        printf("%d / %d = %d", a, b, a / b);

    }

    else {

        printf("Error: please only enter an arithmetic operation icon");
    }

    return 0;
}