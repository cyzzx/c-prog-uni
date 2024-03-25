#include <stdio.h>
#include <stdlib.h>

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for(int j = i+1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }


        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


void printArray(int arr[], int n)
{
     for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}


int main()
{
    int n;
    int arr[100];
    scanf("%d", &n);

    readArray(arr, n);
    sort(arr, n);
    printArray(arr, n);

    return 0;
}
