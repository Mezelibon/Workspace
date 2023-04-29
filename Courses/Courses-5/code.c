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
    
    for (int row = 1; row <= 5; row++){
        for (int space = 1; space <= 5 - row; space++){
            
            printf("  ");
        }
        for (int asterix = 1; asterix <= 2 * row - 1 ; asterix++){
            printf("* ");
        }
        printf("\n");
    }

        return 0;
}