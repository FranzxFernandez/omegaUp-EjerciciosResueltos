/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 26-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int a, b, a1;
    scanf("%d%d%d", &a, &b, &a1);

    const int x = a1 * b / a;
    printf("%d\n", x);
}

int main(void)
{
    solve();
    return 0;
}
