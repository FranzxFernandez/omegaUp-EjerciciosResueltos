/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 19-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((b % a) == 0)
    {
        printf("%d es divisor de %d\n", a, b);
    }else if ((a % b) == 0)
    {
        printf("%d es multiplo de %d\n", a, b);
    }else
    {
        printf("%d no es multiplo ni divisor de %d\n", a, b);
    }
}

int main(void)
{
    solve();
    return 0;
}