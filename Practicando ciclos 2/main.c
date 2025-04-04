/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 03-04-2025
 */

#include <stdio.h>

void solve(void)
{
    int n, a, b, aux = 0;
    scanf("%d%d%d", &n, &a, &b);

    while (n < 100)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        for (int i = n; i > 0; i--)
        {
            printf("%d ", i);
        }

        aux = a * n;

        if (b > 0)
        {
            while (n < aux)
            {
                n += b;
            }
        }
    }
}

int main(void)
{
    solve();
    return 0;
}