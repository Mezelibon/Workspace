#include <stdlib.h>
#include <stdio.h>

int main()
{
    system("cls");

    /*

    *
    * *
    * * *
    * * * *
    * * * * *

    */

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int i = 1; i <= row; i++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    */

    // for (int num = 1; num <= 5; num++)
    // {
    //     for (int i = 1; i <= num; i++)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    /*

    A
    B B
    C C C
    D D D D
    E E E E E

    */

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ", (char)((int)'A' + i));
    //     }
    //     printf("\n");
    // }

    /*

    * * * * *
    * * * *
    * * *
    * *
    *

    */
    // ctrl + K + C
    // ctrl + K + U

    // for (int row = 1; row <= 5; row++){
    //     for (int i = 0; i < 6 - row; i++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1

    */
    // for (int row = 1; row <= 5; row++){
    //     for (int i = 1; i <= 6 - row; i++){
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    /*

    X X X X *
    X X X * * *
    X X * * * * *
    X * * * * * * *
    * * * * * * * * *

        Equation of space = f(x) = ______
        Equation of asterix = f(x) = ______
    */

    // for (int row = 1; row <= 5; row++){
    //     for (int space = 1; space <= 5 - row; space++){

    //         printf("  ");
    //     }
    //     for (int asterix = 1; asterix <= 2 * row - 1 ; asterix++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*

            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5

    */

    // for (int row = 1; row <= 5; row++){
    //     for (int space = 1; space <= 5 - row; space++){
    //         printf("  ");
    //     }
    //     for (int i = row; i <= 2 * row - 1  ; i++)
    //     {
    //         printf("%d ", i);
    //     }
    //     for (int a = 2 * row - 2; a >= row; a--)
    //     {
    //         printf("%d ", a);
    //     }
    //         printf("\n");
    // }

    /*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

    */

    // for (int row = 5; row >= 1; row--)
    // {
    //     for (int space = 5 - row; space >= 1; space--)
    //     {
    //         printf("  ");
    //     }
    //     for (int asteriks = 2 * row - 1; asteriks >= 1; asteriks--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    /*

    1
    2 3
    4 5 6
    7 8 9 10

    */

    // int a = 0;
    // for (int row = 1; row <= 4; row++){
    //     for (int i = 1; i <= row; i++){
    //         a++;
    //         printf("%d ", a);
    //     }
    //     printf("\n");
    // }

    /*

    Enter an integer: 234
    Reversed number = 5432

    */

    // int num, revnum = 0;
    // printf("Enter an integer: ");
    // scanf("%d", &num);

    // while(num != 0){
    //     int rev = num % 10;
    //     revnum = revnum * 10 + rev;
    //     num = num / 10;
    // }

    // printf("Rev: %d",revnum);

    // https://www.programiz.com/c-programming/c-decision-making-loops-examples

    return 0;
}
