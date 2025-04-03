/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 03-04-2025
 */

#include <stdio.h>

void solve(void)
{
    int a, b, c;

    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        const char op[] = "+-*/\0";

        for (int i = 0; op[i] != '\0'; i++)
        {
            switch (op[i])
            { // Se garantiza que existe al menos una solución por eso hay solo dos permutaciones
            case '+':
                if ((a + b) == c)
                {
                    printf("%d + %d = %d\n", a, b, c);
                }

                if (a == (b + c))
                {
                    printf("%d = %d + %d\n", a, b, c);
                }
                break;

            case '-':
                if ((a - b) == c)
                {
                    printf("%d - %d = %d\n", a, b, c);
                }

                if (a == (b - c))
                {
                    printf("%d = %d - %d\n", a, b, c);
                }
                break;

            case '*':

                if ((a * b) == c)
                {
                    printf("%d * %d = %d\n", a, b, c);
                }

                if (a == (b * c))
                {
                    printf("%d = %d * %d\n", a, b, c);
                }
                break;

            case '/':
                if (b != 0 && (a / b) == c)
                {
                    printf("%d / %d = %d\n", a, b, c);
                }

                if (c != 0 && a == (b / c))
                {
                    printf("%d = %d / %d\n", a, b, c);
                }
                break;

            default:
                break;
            }
        }
    }
}

int main(void)
{
    solve();
    return 0;
}