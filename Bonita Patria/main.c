/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 30-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 40)
    {
        printf("ERROR\n");
        return;
    }

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }

    printf("%d\n", index + 1);
}

int main(void)
{
    solve();
    return 0;
}