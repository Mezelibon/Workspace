#include <stdio.h>

// // iterative
// int factorial(int sayi)
// {
//     int answer = 1;
//     for (int i = 1; i <= sayi; i++)
//     {
//         answer *= i;
//     }
//     return answer;
// }

// int recFact(int num)
// {
//     if (num == 1)
//     {
//         return 1;
//     }
//     return num * recFact(num - 1);
// }

// 1 1 2 3 5 8 13 21 34 55

// int itFibo(int num){

//     int answer = 2;
//     for (int i = 1; i <= num - 2; i++){
//         if (num == 1 && num == 2){
//             return 1;
//         }

//         answer = answer + answer - 1;
//     }
//     return answer;
// }

// int itFibo(int num)
// {
//     int ft = 1, st = 1, nt;

//     for (int i = 0; i < num - 1; i++)
//     {
//         nt = ft + st;
//         ft = st;
//         st = nt;
//     }

//     return nt;
// }
    int main()
    {
        // for (int sayi = 1; sayi <= 10000; sayi++)
        // {
        //     printf("%d! = %d\n", sayi, factorial(sayi));
        // }
        int num;
        printf("Enter a Number: ");
        scanf("%d", &num);
        printf("%d", itFibo(num));

        return 0;
    }
