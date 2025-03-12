#include <stdio.h>

void solve(void)
{
    char num[100]; // 99 caracteres + \0
    short sum = 0;
    (void)scanf("%s", num);

    for (short i = 0; num[i] != '\0'; i++)
    {
        // Convierte el carácter en dígito
        short digit = num[i] - '0';
        sum = (sum + digit) % 9;
    }

    printf("%s\n", (sum != 0) ? "No es multiplo." : "Divisibilidad!");
}

int main(void)
{
    solve();
    return 0;
}