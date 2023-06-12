#include <stdio.h>
int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("Enter a Number: ");
            scanf("%d", &arr[i][c]);
        }
    }

    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int c = 0; c < 3; c++)
        {
            if (min > arr[i][c])
            {
                min = arr[i][c];
            }
            if (max < arr[i][c])
            {
                max = arr[i][c];
            }
            sum += arr[i][c];
            printf("%d ", arr[i][c]);
        }

        printf("\tAvg: %g\n", sum / 3.0);
    }
    printf("\nMin: %d\nMax: %d", min, max);

    return 0;
}