#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int n, m, i, j;
    int res = scanf("%d %d", &n, &m);
    if (res != 2)
    {
        return;
    }

    int **matrix = malloc(n * sizeof(int *)); // rows
    if (!matrix)
    {
        // printf("Malloc failed\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        matrix[i] = malloc(m * sizeof(int)); // allocating for m elements in each row
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int res2 = scanf("%d", &matrix[i][j]);
            if (res2 != 1)
            {
                return;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    for (j = 0; j < m; j++)
    {
        int min = matrix[0][j];
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }

        // printf("Min %d column is: %d\n", j + 1, min);
        printf("%d ", min);
    }

    for (i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

int main(void)
{
    solve();
    return 0;
}