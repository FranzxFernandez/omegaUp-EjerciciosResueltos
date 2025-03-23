/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 22-03-2025
 */

#include <stdio.h>

#define M_PI 3.14159265358979323846

void solve(void)
{
    float radius;
    scanf("%f", &radius);

    const float diametro = radius * radius;
    printf("%.2f\n", M_PI * diametro);
}

int main(void)
{
    solve();
    return 0;
}
