/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 14-03-2025
 */

#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int n, count = 0, num;
    scanf("%d", &n);

    int *array = malloc(1001 * sizeof(int));
    if (!array)
    {
        return;
    }

    int j = 0;
    while (scanf("%d", &num) == 1 && j < 1001)
    {
        array[j++] = num;
    }
    
    int len = j;

    for (int i = n; i < len; i++)
    {
        if (array[i] == array[i - n])
        {
            count++;
        }
    }

    printf("%d\n", count);

    free(array);
}

int main(void)
{
    solve();
    return 0;
}
