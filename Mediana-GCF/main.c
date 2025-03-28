/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 28-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    if ((n % 2) != 0) // si es impar
    {
        int pos = (n + 1) / 2;
        int value = array[pos - 1];
        printf("%d\n", value);
    }
    else
    {
        int pos_n = n / 2;
        int pos_n_minus_eins = pos_n - 1;
        double _value = (double)(array[pos_n] + array[pos_n_minus_eins]) / 2;
        printf("%g\n", _value);
    }
}

int main(void)
{
    solve();
    return 0;
}