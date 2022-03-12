#include <stdio.h>

int main()
{
    float prices[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++)
    {
        printf("%.2f\n", prices[i]);
    }
    return 0;
}