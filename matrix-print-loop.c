#include <stdio.h>

int main()
{
    int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        for (int j = 0; j < sizeof(numbers[0]) / sizeof(numbers[0][0]); j++)
        {
            printf("%i\n", numbers[i][j]);
        }
    }

    return 0;
}