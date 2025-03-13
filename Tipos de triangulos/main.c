/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 13-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n1, n2, n3;
    (void)scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < 90 && n2 < 90 && n3 < 90)
    {
        puts("ACUTANGULO");
    }
    else if (n1 == 90 || n2 == 90 || n3 == 90)
    {
        puts("RECTANGULO");
    }
    else
    {
        puts("OBTUSANGULO");
    }
}

int main(void)
{
    solve();
    return 0;
}
