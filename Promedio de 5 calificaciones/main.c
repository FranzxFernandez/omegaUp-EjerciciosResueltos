/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 18-03-2025
 */

#include <stdio.h>

void solve(void)
{
    const int anzahl = 5;
    int num, sum = 0;

    for (int i = 0; i < anzahl; i++)
    {
        scanf("%d", &num);
        sum += num;
    }
    
    printf("%.1f\n", (float)sum / anzahl);
}

int main(void)
{
    solve();
    return 0;
}