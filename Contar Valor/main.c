/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 10-04-2025
 */

#include <stdio.h>

void solve(void)
{
    int n, k, count = 0;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);

        if (temp == k)
        {
            count++;
        }
    }

    printf("%d\n", count);
}

int main(void)
{
    solve();
    return 0;
}