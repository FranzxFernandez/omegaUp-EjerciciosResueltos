/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 29-03-2025
 */

#include <stdio.h>

void solve(void)
{
    int n;
    scanf("%d", &n);

    if (n > 10) return;

    const char *messages[] = {"Reprobado", "Suficiente", "Bien", "Sobresaliente", "Excelente"};
    int i = n < 6 ? 0 : n == 6 ? 1 : n < 9 ? 2 : n == 9 ? 3 : 4;
    printf("%s\n", messages[i]);
}

int main(void)
{
    solve();
    return 0;
}