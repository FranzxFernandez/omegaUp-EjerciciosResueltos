/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 20-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int sum = 0, count = 0;
    int x;
    while (scanf("%d", &x) && (x > 0))
    {
        sum += x;
        count++;
    }

    printf("%d %d\n", sum, count);
}

int main(void)
{
    solve();
    return 0;
}
