/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 28-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n, m;
    scanf("%d%d", &n, &m);

    int array[n];
    int occurences[m + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 1; i <= m; i++)
    {
        occurences[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int value = array[i];
        occurences[value]++; // counter

        
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d: %d\n", i, occurences[i]);
    }
}

int main(void)
{
    solve();
    return 0;
}