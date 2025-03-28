/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 28-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n, m;
    scanf("%d%d", &n, &m);

    printf("%g\n", (double)n / (m + 1));
}

int main(void)
{
    solve();
    return 0;
}
