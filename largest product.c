#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void getData(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i]) > abs(arr[j]))
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int highestProduct(int arr[], int n)
{
    sort(arr, n);

    int max1 = arr[n-1];
    int max2 = arr[n-2];

    printf("%d %d", max2, max1);
}


int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    getData(arr, n);
    highestProduct(arr, n);

}

