/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 03-04-2025
 */

#include <stdio.h>
#include <string.h>

void solve(void)
{
    char word[1023] = {'\0'};
    fgets(word, sizeof(word), stdin);

    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n')
    {
        word[len - 1] = '\0';
    }

    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == ' ')
        {
            continue;
        }
        count++;
    }

    printf("%d\n", count);
}

int main(void)
{
    solve();
    return 0;
}