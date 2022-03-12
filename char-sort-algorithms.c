#include <stdio.h>

// sorting array for in descencding
void sort(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArr(char arr[], int size)
{
    // print array
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
}

int main()
{
    char arr[] = {'a', 'C', 'B', 'A', 'i', 'O'};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    printArr(arr, size);

    return 0;
}