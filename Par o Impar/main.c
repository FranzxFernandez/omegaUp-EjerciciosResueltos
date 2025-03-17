/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 17-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d", &n);

    printf("%s", (n & 1) ? "Impar" : "Par");
}

int main(void)
{
    solve();
    return 0;
}
