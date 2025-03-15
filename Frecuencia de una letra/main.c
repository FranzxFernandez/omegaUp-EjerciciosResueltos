/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 15-03-2025
 */

#include <stdio.h>

void solve(void)
{
    char word[100];
    char letra;
    int count = 0;
    
    scanf("%s %c", word, &letra);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letra)
        {
            count++;
        }
    }

    printf("%d\n", count);
}

int main(void)
{
    solve();
    return 0;
}
