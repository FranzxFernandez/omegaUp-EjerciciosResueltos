#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num = 0; // numero entero, la cantidad de caracteres que tiene la contraseña
    bool isVowel = false, isNumeric = false, consecutiveChar = false;
    char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
    char alphabet_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "0123456789";

    (void)scanf("%d", &num);
    getchar(); // eliminar el salto de linea producido por scanf

    char *password = (char *)malloc((num + 1) * sizeof(char)); // num * 1B
    if (password == NULL)
    {
        printf("Failed\n");
        free(password);
        return -1;
    }

    fgets(password, num + 1, stdin);

    size_t len = strlen(password);
    if (len > 0 && password[len - 1] == '\n')
    {
        password[len - 1] = '\0';
        len--; // que no cuente el '\0'
    }

    if (num < 12 || len != num)
    {
        printf("DEBIL");
        free(password);
        return -1;
    }

    int counter = 0;
    for (int i = 0; password[i] != '\0'; i++)
    {
        while (counter <= strlen(alphabet_lower))
        {
            if (password[i] == alphabet_lower[counter] || password[i] == alphabet_upper[counter])
            {
                isVowel = true;
                // i = num;
                break; // solo necesito un encontrar al menos un caracter del alfabeto, salgo del while
            }

            counter++;
        }
        // counter = 0; // lo reinicio despues de alcanzar el valor de value

        for (int counter = 0; password[counter] != '\0'; counter++)
        {
            if (password[i] == numbers[counter])
            {
                isNumeric = true;
                break;
            }
        }

        if (password[i] == password[i + 1] && password[i] == password[i + 2])
        {
            consecutiveChar = true;
            break;
        }

        if (isVowel && isNumeric && consecutiveChar) // salir del outer loop una vez encontrando por lo menos un caracter
        {
            break;
        }
    }

    printf(isVowel && isNumeric && consecutiveChar ? "FUERTE\n" : "DEBIL\n");

    free(password);
    return 0;
}
