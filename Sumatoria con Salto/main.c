/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 03-04-2025
 */

#include <stdio.h>

void solve(void)
{
    int s;
    long long n, m, sum;
    scanf("%d %lld", &s, &n);

    m = (n - 1) / s + 1;             // Cantidad de numeros
    sum = m * (2 + s * (m - 1)) / 2; 

    printf("%lld\n", sum);
}

int main(void)
{
    solve();
    return 0;
}