#include <stdio.h>

int solve()
{
    int a, b, c; // 3 enteros

    if (scanf("%d %d %d", &a, &b, &c) != 3) // si scanf()  no ha leído correctamente los tres enteros esperados
    {
        return 0; // termina
    }

    int discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        printf("Dos reales distintas.\n");
    }
    else if (discriminant == 0)
    {
        printf("Una real repetida.\n");
    }
    else
    {
        printf("Ninguna real.\n");
    }

    return 1;
}

int main()
{
    while (solve())
    {
    }

    return 0;
}
