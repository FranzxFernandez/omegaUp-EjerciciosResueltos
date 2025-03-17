/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 17-03-2025
 */

#include <stdio.h>

int main(void)
{
    float x, y, z;
    scanf("%f", &x);

    y = (x + 5) / (2 * (x + 1));

    float y_quadrat = y * y; // y^2

    z = y / x + x / y - 2;

    printf("%f\n", z);

    return 0;
}