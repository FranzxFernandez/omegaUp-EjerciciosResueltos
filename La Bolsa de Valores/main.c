/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 1-03-2025
 */

#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    long long int n, max, min;
    scanf("%lld", &n);

    long long int *array = malloc(n * sizeof(long long int));
    if (!array)
    {
        return;
    }

    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
    }

    max = array[0];
    min = array[0];

    for (long long int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("%lld\n", max - min);

    free(array);
}

int main(void)
{
    solve();
    return 0;
}
