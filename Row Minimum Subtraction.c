#include <stdio.h>
#include <stdlib.h>

void readArray(int m, int n, int arr[100][100])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}



void RowMinSub(int m, int n, int arr[100][100])
{

    for (int i = 0; i < m; i++)
    {
        int min = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            arr[i][j] -= min;
        }
    }
}

void printArray(int m, int n, int arr[100][100])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[100][100];

    readArray(m, n, matrix);
    RowMinSub(m, n, matrix);
    printArray(m, n, matrix);


    return 0;
}
