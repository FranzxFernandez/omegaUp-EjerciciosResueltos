/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 14-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a & 1) == 0 || (b & 1) == 0)
    {
        a += 5;
        if (a >= b)
        {
            printf("%d\n", a + b);
        }
        else
        {
            printf("%d\n", a - b);
        }
    }
    else
    {
        b -= 5;
        printf("%d\n", a * b);
    }
}

int main(void)
{
    solve();
    return 0;
}
