#include <stdio.h>
#include <stdbool.h>

int main()
{

    // printf("Hello World!");

    /*
                DATA TYPES

        int
        bool
        char
        float
        double
    */

    // dataType varName = value; => Decleration & Initialization
    // dataType varName; => Decleration

    // int age = 5;
    // bool isPrime = false;
    // char letter = 'A';
    // float pi = 3.14;
    // double avg = 3.44;

    // printf("I am %d years old.\n",age);
    // printf("My number is prime: %d\n", isPrime);
    // printf("My letter is: %c\n", letter);
    // printf("My PI is: %.1f\n", pi);
    // printf("My GPA is: %.1lf\n", avg);

    /*

                            OPERATORS

        1. Arithmetic Operators
            +
            -
            *
            /
            % (modulo)
    */

    // int a = 9, b = 4, c;

    // c = a + b;
    // printf("a+b = %d \n", c); // 13

    // c = a - b;
    // printf("a-b = %d \n", c); // 5

    // c = a * b;
    // printf("a*b = %d \n", c); // 36

    // c = a / b;
    // printf("a/b = %d \n", c); // 2

    // c = a % b;
    // printf("Remainder when a divided by b = %d \n", c); // 1

    /*
        2. Increment/Decrement Operators

            ++
            --
    */

    // int a = 5, b = 5, c = 5, d = 5;

    // printf("a++: %d\n", a++); // 5
    // printf("a: %d\n\n", a);   // 6

    // printf("++b: %d\n", ++b); // 6
    // printf("b: %d\n\n", b);   // 6

    // printf("c--: %d\n", c--); // 5
    // printf("c: %d\n\n", c);   // 4

    // printf("--d: %d\n", --d); // 4
    // printf("d: %d\n\n", d);   // 4

    /*
        3. Assignment Operators
            Operator	    Example	        Same as
                =	        a = b	        a = b
                +=	        a += b	        a = a+b
                -=	        a -= b	        a = a-b
                *=	        a *= b	        a = a*b
                /=	        a /= b	        a = a/b
                %=	        a %= b	        a = a%b
    */

    // int a = 5, c;

    // c = a; // 5
    // printf("c = %d\n", c);

    // c += a; // 10
    // printf("c = %d\n", c);

    // c -= a; // 5
    // printf("c = %d\n", c);

    // c *= a; // 25
    // printf("c = %d\n", c);

    // c /= a; // 5
    // printf("c = %d\n", c);

    // c %= a; // 0
    // printf("c = %d\n", c);

    /*
        4. Relational Operators

            Operator	    Meaning of Operator	                            Example
                ==	            Equal to	                    5 == 3 is evaluated to 0
                >	            Greater than	                5 > 3 is evaluated to 1
                <	            Less than	                    5 < 3 is evaluated to 0
                !=	            Not equal to	                5 != 3 is evaluated to 1
                >=	            Greater than or equal to	    5 >= 3 is evaluated to 1
                <=	            Less than or equal to	        5 <= 3 is evaluated to 0

    */

    // int a = 5, b = 5, c = 10;

    // printf("%d == %d is %d \n", a, b, a == b); // 1
    // printf("%d == %d is %d \n", a, c, a == c); // 0
    // printf("%d > %d is %d \n", a, b, a > b);   // 0
    // printf("%d > %d is %d \n", a, c, a > c);   // 0
    // printf("%d < %d is %d \n", a, b, a < b);   // 0
    // printf("%d < %d is %d \n", a, c, a < c);   // 1
    // printf("%d != %d is %d \n", a, b, a != b); // 0
    // printf("%d != %d is %d \n", a, c, a != c); // 1
    // printf("%d >= %d is %d \n", a, b, a >= b); // 1
    // printf("%d >= %d is %d \n", a, c, a >= c); // 0
    // printf("%d <= %d is %d \n", a, b, a <= b); // 1
    // printf("%d <= %d is %d \n", a, c, a <= c); // 1

    /*
        5. Logical Operators
            Operator	                                                        Meaning	Example
                &&	            Logical AND. True only if all operands are true	If c = 5 and d = 2 then, expression ((c==5) && (d>5)) equals to 0.
                ||	            Logical OR. True only if either one operand is true	If c = 5 and d = 2 then, expression ((c==5) || (d>5)) equals to 1.
                !	            Logical NOT. True only if the operand is 0	If c = 5 then, expression !(c==5) equals to 0.
    */

    // int a = 5, b = 5, c = 10, result;

    // result = (a == b) && (c > b);
    // printf("(a == b) && (c > b) is %d \n", result); // 1

    // result = (a == b) && (c < b);
    // printf("(a == b) && (c < b) is %d \n", result); // 0

    // result = (a == b) || (c < b);
    // printf("(a == b) || (c < b) is %d \n", result); // 1

    // result = (a != b) || (c < b);
    // printf("(a != b) || (c < b) is %d \n", result); // 0

    // result = !(a != b);
    // printf("!(a != b) is %d \n", result); // 1

    // result = !(a == b);
    // printf("!(a == b) is %d \n", result); // 0

    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // printf("Your number is %d", num);

    return 0;
}