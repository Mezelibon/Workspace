#include <stdio.h>
int main()
{
    for (char num = 'A'; num <= 'E'; num++)
    {
        for (int i = 'A'; i <= num; i++)
        {
            printf("%c ", num);
        }
        printf("\n");
    }

    return 0;
}
