/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 28-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int N, G;
    scanf("%d%d", &N, &G);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    // Si G = N, es como no rotar. Es como una rotacion de 360°
    if (G == N)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ", array[i]);
        }
    }

    int result[N];
    for (int i = 0; i < N; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        int pos = (i + G) % N;
        result[pos] = array[i];
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", result[i]);
    }
    
}

int main(void)
{
    solve();
    return 0;
}