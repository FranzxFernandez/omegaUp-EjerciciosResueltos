/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 19-03-2025
 */

#include <stdio.h>

void solve(void)
{
    float a1, b1, c1, a2, b2, c2, x, y;
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);

    y = (c2 * a1 - a2 * c1) / (-a2 * b1 + a1 * b2);
    x = (c1 - b1 * y) / a1;

    printf("%f %f\n", x, y);
}

int main(void)
{
    solve();
    return 0;
}
