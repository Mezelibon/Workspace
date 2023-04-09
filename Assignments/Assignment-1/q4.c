#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a letter: ");

    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {

        printf("%c is a vowel letter", letter);

    }

    else if(letter != (char)letter){

            printf("Error: please enter a letter");
        }
    else
    {

        printf("%c is a consonant letter", letter);

    }

    return 0;
}