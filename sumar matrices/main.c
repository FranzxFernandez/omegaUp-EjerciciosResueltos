#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int n;
    int ret_0 = scanf("%d", &n);
    if (ret_0 != 1)
    {
        return;
    }
    
    int *matrix_A = malloc(n * n * sizeof(int));
    int *matrix_B = malloc(n * n * sizeof(int));
    int *result = malloc(n * n * sizeof(int));

    if (!matrix_A || !matrix_B || !result)
    {
        return;
    }

    for (int i = 0; i < n * n; i++)
    {
        int ret = scanf("%d", &matrix_A[i]);
        if (ret != 1)
        {
            return;
        }
    }

    for (int i = 0; i < n * n; i++)
    {
        int ret1 = scanf("%d", &matrix_B[i]);
        if (ret1 != 1)
        {
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i * n + j] = matrix_A[i * n + j] + matrix_B[i * n + j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", result[i * n + j]);
        }
        printf("\n");
    }

    free(matrix_A);
    free(matrix_B);
    free(result);
}

int main(void)
{
    solve();
    return 0;
}
