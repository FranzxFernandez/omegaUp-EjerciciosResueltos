/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 17-03-2025
 */

#include <stdio.h>

void solve(void)
{
    char op;
    float a, b;

    scanf("%c %f %f", &op, &a, &b);

    switch (op)
    {
    case '+':
        printf("Resultado: %.2f\n", a + b);
        break;
    case '-':
        printf("Resultado:  %.2f\n", a - b);
        break;
    case '*':
        printf("Resultado:  %.2f\n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Error\n");
        }
        else
        {
            printf("Resultado: %.2f\n", a / b);
        }
        break;
    default:
        break;
    }
}

int main(void)
{
    solve();
    return 0;
}