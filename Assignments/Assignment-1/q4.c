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
    else if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
    {
        printf("%c is a consonant letter", letter);
    }
    else{
        printf("Not a letter!");
    }

    return 0;
}