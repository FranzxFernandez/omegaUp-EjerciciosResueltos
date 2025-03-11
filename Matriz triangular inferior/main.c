#include <stdio.h>
#include <stdlib.h>

void printMatrix(const short **matrix, const short row, const short cols);
void solve(void);

int main(void)
{
    solve();
    return 0;
}

void printMatrix(const short **matrix, const short row, const short cols)
{
    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            printf("%hd ", matrix[i][j]);
        }
        printf("\n");
    }
}

void solve(void)
{
    const short row = 4, cols = 4;

    short **matrix = malloc(row * sizeof(short *));
    if (matrix == NULL)
    {
        return;
    }

    for (short i = 0; i < row; i++)
    {
        matrix[i] = malloc(cols * sizeof(short)); // allocando espacio para cada elemento por fila
    }

    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            (void)scanf("%hd", &matrix[i][j]);
        }
    }

    printMatrix(matrix, row, cols);

    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if ((j > i) && (i != (row - 1)))
            {
                //short zahl = matrix[i][j];
                matrix[i][j] = 0;
            }
        }
    }

    printf("\n");

    printMatrix(matrix, row, cols);

    for (short i = 0; i < row; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
}
