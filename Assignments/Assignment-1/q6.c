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
        if(b > c){
            printf("%d > %d > %d", a, b, c);
        } 
        else{
            printf("%d > %d > %d", a, c, b);
        }
    }
    if (b > a && b > c)
    {
        if (a > c)
        {
            printf("%d > %d > %d", b, a, c);
        }
        else
        {
            printf("%d > %d > %d", b, c, a);
        }
    }
    if (c > a && c > a)
    {
        if (a > b)
        {
            printf("%d > %d > %d", c, a, b);
        }
        else
        {
            printf("%d > %d > %d", c, b, a);
        }
    }

    
    return 0;
}