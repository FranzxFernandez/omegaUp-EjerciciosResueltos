/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 20-03-2025
 */

#include <stdio.h>
#include <stdlib.h>

void solve(void)
{
    int len, count = 0;
    scanf("%d", &len);

    int *pos = malloc(len * sizeof(int));
    if (pos == NULL)
    {
        return;
    }

    for (int i = 0; i < len; i++)
    {
        int x;
        scanf("%d", &x);

        if ((x % 3) == 0) // si es multiplo de 3
        {
            pos[count] = i + 1;
            count++;
        }
    }

    if (count > 0)
    {
        printf("%d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", pos[i]);
        }
    }
    else
    {
        puts("No hay triples.");
    }

    free(pos);
}

int main(void)
{
    solve();
    return 0;
}