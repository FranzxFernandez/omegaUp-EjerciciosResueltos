/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 27-03-2025
 */

#include <stdio.h>

#define M_PI 3.14159265358979323846L

int main(void)
{
    long double x, y, z;
    scanf("%Lf%Lf%Lf", &x, &y, &z); 

    long double z_potenz = z * z;
    long double zaehler = x * (1 + y + z_potenz);
    long double nenner = (x + M_PI) * (y + M_PI);

    printf("%Lf\n", zaehler / nenner); 

    return 0;
}