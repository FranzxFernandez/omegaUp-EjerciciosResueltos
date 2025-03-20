/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 20-03-2025
 */

#include <stdio.h>
#include <math.h>

int solve(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 1)
    {
        return 1;
    }

    int digits = (int)(b * log10(a)) + 1;
    return digits;
}

int main(void)
{
    printf("%d\n", solve());
    return 0;
}
