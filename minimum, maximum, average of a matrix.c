#include <stdio.h>
#include <stdlib.h>

void readArray(int m, int n, int arr[][100])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

double findAvg(int m, int n, int arr[][100])
{
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            sum += arr[i][j];
    }

    return (double)sum / (m*n);
}

int findMax(int m, int n, int arr[][100])
{
    int max = arr[0][0];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
             if (arr[i][j] > max)
                max = arr[i][j];
    }

    return max;
}

int findMin(int m, int n, int arr[][100])
{
    int min = arr[0][0];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
             if (arr[i][j] < min)
                min = arr[i][j];
    }

    return min;
}

int RowMax(int r, int n, int arr[][100])
{
    int max2 = arr[r-1][0];
    for(int i = 0; i < n; i++)
    {
        if (arr[r-1][i] > max2)
            max2 = arr[r-1][i];
    }

    return max2;
}

int ColumnMax(int m, int c, int arr[][100])
{
    int max3 = arr[0][c-1];
    for(int i = 0; i < m; i++)
    {
        if (arr[i][c-1] > max3)
            max3 = arr[i][c-1];
    }

    return max3;
}

int main()
{
    int m, n;
    int r, c;
    scanf("%d %d", &m, &n);
    int matrix[100][100];

    readArray(m, n, matrix);
    double avg = findAvg(m, n, matrix);
    int max = findMax(m, n, matrix);
    int min = findMin(m, n, matrix);

    printf("Average is: %.2lf \nMaximum is: %d \nMinimum is: %d \n", avg, max, min);

    printf("Choose the row to find its max: ");
    scanf("%d", &r);
    int maxrow = RowMax(r, n, matrix);

    printf("Choose the column to find its max: ");
    scanf("%d", &c);
    int maxcolumn = ColumnMax(m, c, matrix);

    printf("Maximum of row %d: %d \n", r, maxrow);
    printf("Maximum of column %d: %d",c, maxcolumn);
    return 0;
}
