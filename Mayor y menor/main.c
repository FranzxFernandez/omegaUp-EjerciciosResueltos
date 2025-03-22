/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 22-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int a, b, c, d, e, min, max;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    min = a;
    max = a;

    min = (min > b) ? b : min;
    min = (min > c) ? c : min;
    min = (min > d) ? d : min;
    min = (min > e) ? e : min;

    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    max = (max < d) ? d : max;
    max = (max < e) ? e : max;

    printf("%d %d\n", min, max);
}

int main(void)
{
    solve();
    return 0;
}