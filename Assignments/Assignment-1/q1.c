#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);// \n

    fflush(stdin);

    printf("Enter the second number: ");
    scanf("%d", &b);// .2

    if (a > b)
    {
        printf("The largest number between this two is = %d", a);
    }
    else if (b > a)
    {
        printf("The largest number between this two is = %d", b);
    }
    else if (a != (int)a || b != (int)b)
    {
        printf("Error: please only enter integers");
    }
    else
    {
        printf("The numbers you entered are equal");
    }

    return 0;
}