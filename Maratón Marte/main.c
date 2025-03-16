/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 15-03-2025
 */

#include <stdio.h>

#define UMFANG 0.0007853981633974483 // 2*pi*r, radius = 0.000125 km

void solve(void)
{
    float num_in_km;

    scanf("%f", &num_in_km);

    printf("%d\n", (int)(num_in_km / UMFANG));
}

int main(void)
{
    solve();
    return 0;
}
