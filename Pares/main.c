#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int n, odd_count = 0;
    (void)scanf("%d", &n);

    unsigned long long *array = malloc(n * sizeof(unsigned long long));
    // unsigned long long debido al rango de valores de hasta 2^(64) - 1 (64 bits)
    if (!array)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        (void)scanf("%llu", &array[i]);
        if (array[i] % 2 != 0) // si no hay ningun par
        {
            odd_count++;
        }
    }

    if (odd_count != n)
    {
        for (int i = 0; i < n; i++)
        {
            if ((array[i] % 2) == 0)
            {
                printf("[%llu] ", array[i]);
            }
        }
    }else
    {
        printf(":(");
    }
    
    free(array);
}

int main(void)
{
    solve();
    return 0;
}
