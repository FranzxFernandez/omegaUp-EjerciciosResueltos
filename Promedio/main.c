/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 19-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n, x, sum = 0;
    ;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }

    printf("%.1f\n", (float)sum / n);
}

int main(void)
{
    solve();
    return 0;
}