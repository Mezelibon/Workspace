#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrimeTuna(int num)
{
    int counter = 1;
    if (num < 2){
        printf("TUNA::COUNTER::%d\n", counter);
        return false;
    }
    else if (num % 2 == 0 && num != 2){
        printf("TUNA::COUNTER::%d\n", counter);
        return false;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            printf("TUNA::COUNTER::%d\n", counter);
            return false;
        }
        counter++;
    }

    printf("TUNA::COUNTER::%d\n", counter);
    return true;
}

bool isPrimeAyberk(int num)
{
    int counter = 1;

    if (num < 2){
        printf("AYBERK::COUNTER::%d\n", counter);
        return false;
    }
    else if (num % 2 == 0 && num != 2){
        printf("AYBERK::COUNTER::%d\n", counter);
        return false;
    }
    else
    {
        for (int i = 2; i <= (int)sqrt(num); i++)
        {
            if (num % i == 0)
            {
                printf("AYBERK::COUNTER::%d\n", counter);
                return false;
            }
            counter++;
        }
    }
    printf("AYBERK::COUNTER::%d\n", counter);
    return true;
}

int main()
{
    for (int i = 0; i < 10000; i++)
    {
        printf("Number::%d\n", i);
        bool ayberkResult = isPrimeAyberk(i);
        bool tunaResult = isPrimeTuna(i);
        if (ayberkResult != tunaResult)
        {
            printf("Ayberk::isPrime(%d) = %d\n", i, ayberkResult);
            printf("Tuna::isPrime(%d) = %d\n-------------------\n", i, tunaResult);
        }
        printf("------------------------------\n");
    }

    /*
        for(initialization; condition; update){

        }
    */

    // for (int a = 5; a < 10; a++){
    //     printf("%d\n", a);
    // }

    // int a = 0;

    // while (a < 10)
    // {
    //     printf("%d\n", ++a);
    // }

    // int min, max;

    // printf("Enter the first number: ");
    // scanf("%d", &min);

    // printf("Enter the second number: ");
    // scanf("%d", &max);

    // if (min > max){
    //     int temp = max;
    //     max = min;
    //     min = temp;
    // }

    // for (int i = min; i <= max; i++)
    // {
    //     if(i % 2 != 0)
    //         printf("%d\n", i);
    // }

    // 5! = 5 x 4 x 3 x 2 x 1
    // int num, ans = 1;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // for (int i = num; i >= 1; i--){
    //     ans *= i;
    //     // ans = ans * i
    // }

    // printf("%d! = %d", num, ans);

    // int base, exp, ans = 1;
    // printf("Enter base: ");
    // scanf("%d", &base);

    // printf("Enter the exponent: ");
    // scanf("%d", &exp);

    // for (int i = 1; i <= exp; i++){
    //     ans *= base;
    // }

    // printf("%d^%d = %d",base, exp, ans);

    return 0;
}
