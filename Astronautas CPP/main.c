/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 26-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    solve();
    return 0;
}
