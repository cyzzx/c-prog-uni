#include <stdio.h>
#include <stdlib.h>

void readMatrix(int m, int n, int arr[100][100])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int m, int n, int arr[100][100])
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

void matrixMultiplication(int r1, int c1, int r2, int c2, int arr[][100], int m1[][100], int m2[][100])
{
    if (c1 != r2)
    {
        printf("Multiplication cannot be done.");
    }
    else
    {

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            arr[i][j] = 0;

            for(int k = 0; k < r2; k++)
            {
                arr[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

     printMatrix(r1, c2, arr);
    }
}


int main()
{
    int r1, r2, c1, c2;
    int matrixA[100][100];
    int matrixB[100][100];
    int result[100][100];

    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &c1);
    readMatrix(r1, c1, matrixA);
    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &c2);
    readMatrix(r2, c2, matrixB);



    matrixMultiplication(r1, c1, r2, c2, result, matrixA, matrixB);

    return 0;
}
