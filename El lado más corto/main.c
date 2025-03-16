/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 16-03-2025
 */

#include <stdio.h>
#include <math.h>

inline double distancia(double xa, double ya, double xb, double yb)
{
    return sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
}

int main(void)
{
    double x1, x2, x3, x4, y1, y2, y3, y4;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    double d12 = distancia(x1, y1, x2, y2);
    double d23 = distancia(x2, y2, x3, y3);
    double d34 = distancia(x3, y3, x4, y4);
    double d41 = distancia(x4, y4, x1, y1);

    double min_dist = d12;
    if (d23 < min_dist)
        min_dist = d23;
    if (d34 < min_dist)
        min_dist = d34;
    if (d41 < min_dist)
        min_dist = d41;

    printf("%lf\n", min_dist);

    return 0;
}
