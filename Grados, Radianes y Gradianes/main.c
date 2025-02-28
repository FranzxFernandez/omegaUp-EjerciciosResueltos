#include <stdio.h>

#define M_PI 3.14159265358979323846

void solve(void)
{
    double grados, radianes, gradianes;
    (void)scanf("%lf", &grados);

    const double conv_rad = M_PI / 180.0;
    const double conv_grad = 400.0 / 360.0;

    gradianes = grados * conv_grad; // Cálculo de gradianes
    radianes = grados * conv_rad;   // Cálculo de radianes

    printf("Radianes: %g\nGradianes: %g\n", radianes, gradianes);
}

int main(void)
{
    solve();
    return 0;
}