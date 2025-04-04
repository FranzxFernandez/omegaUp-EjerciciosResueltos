/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 04-04-2025
 */

#include <stdio.h>
#include <string.h>

void solve(void)
{
    char word[501] = {'\0'};          // 500 + '\0'
    fgets(word, sizeof(word), stdin); // anade un salto de linea

    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n')
    {
        word[len - 1] = '\0';
    }

    int results[5] = {0};

    char vocals[] = "aeiou";

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (tolower(word[i]) == vocals[j])
            {
                results[j]++;
                break; 
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", results[i]);
    }
}

int main(void)
{
    solve();
    return 0;
}