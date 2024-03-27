#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int temp;
        for(int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
               temp = arr[j];
               arr[j] = arr[i];
               arr[i] = temp;

            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i  = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


int main()
{
    int arr[9] = {2, 4, 7, 10, 14, 29, 62, 89, 73};

    insertionSort(arr, 9);

    printArray(arr, 9);

    return 0;
}
