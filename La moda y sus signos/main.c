/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 26-03-2025
 */

#include <stdio.h>
#include <math.h>

int digit_most_frequently(int *array, int len);
int digit_frequency_positiv_negativ(int *array, int len, int digit_found, int *digit_frequency_negativ);

int main(void)
{
    int n, digit_frequency_negativ = 0;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int digit_found = digit_most_frequently(array, n);
    int frecuency_digit_positiv = digit_frequency_positiv_negativ(array, n, digit_found, &digit_frequency_negativ);

    printf("%d\n", digit_found);
    printf("%d %d\n", frecuency_digit_positiv, digit_frequency_negativ);

    return 0;
}

int digit_most_frequently(int *array, int len)
{
    int temp = 0, mas_veces = 0;

    for (int i = 0; i < len; i++)
    {
        int count = 0; // reiniciar el contador
        for (int j = 0; j < len; j++)
        {
            if (abs(array[j]) == abs(array[i]))
            {
                count++; // digito que mas aparecio independientemente del signo
            }
        }

        if (count > temp)
        {
            mas_veces = abs(array[i]); // para obtener siempre el digito positivo
            temp = count;
        }

        if (count == temp) // si hay empate
        {
            if (abs(array[i]) < mas_veces) // elegir el menor valor absoluto
            {
                mas_veces = abs(array[i]);
            }
        }
    }

    return mas_veces;
}

int digit_frequency_positiv_negativ(int *array, int len, int digit_found, int *digit_frequency_negativ)
{
    // digit_found es siempre positivo

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (array[i] == digit_found) // en su forma positiva
        {
            count++;
        }

        if (array[i] == -digit_found) // en su forma negativa
        {
            (*digit_frequency_negativ)++;
        }
    }

    return count;
}