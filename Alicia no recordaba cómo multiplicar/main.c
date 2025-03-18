/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 18-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", a);
    for (int i = 0; i < b - 1; i++)
    {
        printf("+%d", a);
    }
    printf("=");

    printf("%d", b);
    for (int i = 0; i < a - 1; i++)
    {
        printf("+%d", b);
    }
}

int main(void)
{
    solve();
    return 0;
}
