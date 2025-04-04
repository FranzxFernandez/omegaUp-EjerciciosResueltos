/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 04-04-2025
 */

#include <stdio.h>

void solve(void)
{
    long long int n, result;
    scanf("%lld", &n);

    result = n * (n + 1) / 2;

    printf("%lld\n", result);
}

int main(void)
{
    solve();
    return 0;
}