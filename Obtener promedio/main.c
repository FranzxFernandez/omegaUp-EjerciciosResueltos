/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 26-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        sum += num;
    }

    printf("%.2f\n", (float)sum / n);
    
}

int main(void)
{
    solve();
    return 0;
}