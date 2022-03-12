#include <stdio.h>

// sorting array for in descencding
void sort(int arr[], int size)
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

void printArr(int arr[], int size)
{
    // print array
    for (int i = 0; i < size; i++)
    {
        printf("%i => ", arr[i]);
    }
}

int main()
{
    int arr[] = {2, 6, 3, 8, 4, 0, 6, 9, 7, 2, 1, 4, 3, 8, 2, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);
    printArr(arr, size);

    return 0;
}