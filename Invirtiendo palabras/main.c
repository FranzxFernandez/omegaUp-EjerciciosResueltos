/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 28-03-2025
 */

#include <stdio.h>
#include <string.h>

void solve(void)
{
    char array[1001] = {'\0'};          // 1000 caracteres + '\0'
    fgets(array, sizeof(array), stdin); // automaticamente anade un salto de linea al final

    size_t len = strlen(array);
    if (len > 0 && array[len - 1] == '\n')
    {
        array[len - 1] = '\0';
    }

    char new_array[1000] = {'\0'};

    int start = 0;
    for (int i = 0; i <= len; i++)
    {

        if (array[i] == ',' || array[i] == '\0')
        {
            int end = i - start;
            strncpy(new_array, array + start, end); // copia hasta end caracteres de array antes de la coma
            new_array[end] = '\0';

            for (int j = 0; j < (end / 2); j++)
            {
                char temp = new_array[j];
                new_array[j] = new_array[end - j - 1];
                new_array[end - j - 1] = temp;
            }
            printf("%s", new_array);

            if (array[i] == ',')
            {
                printf(",");
            }

            start = i + 1; // empezar con la siguiente palabra
        }
    }
}

int main(void)
{
    solve();
    return 0;
}