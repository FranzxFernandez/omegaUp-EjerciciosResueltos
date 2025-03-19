/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 19-03-2025
 */

#include <stdio.h>

void solve(void)
{
    long a, b, s;
    scanf("%ld %ld %ld", &a, &b, &s);

    printf("%s\n", ((a + b) % s == 0) ? "SI": "NO");
}

int main(void)
{
    solve();
    return 0;
}
