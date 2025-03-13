/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 13-03-2025
 */

#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int a, b;
    (void)scanf("%d %d", &a, &b);

    int *array = malloc(a * sizeof(int));
    if (!array)
    {
        return;
    }

    for (int i = 0; i < a; i++)
    {
        (void)scanf("%d", &array[i]);
    }

    int temp = array[0];
    for (int i = 1; i < a; i++)
    {
        if (b == 1)
        {
            temp += array[i];
        }
        else if (b == 2)
        {
            temp -= array[i];
        }
        else if (b == 3)
        {
            temp *= array[i];
        }
        else
        {
            temp /= array[i];
        }
    }
    printf("%d\n", temp);

    free(array);
}

int main(void)
{
    solve();
    return 0;
}
