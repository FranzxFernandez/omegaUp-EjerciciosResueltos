/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 10-04-2025
 */

#include <stdio.h>
#include <string.h>

void solve(void) // O(n)
{
    char word[1023] = {'\0'}; // 1022 + '\0'
    int n;

    scanf("%s%d", &word, &n);

    size_t len = strlen(word);
    for (int i = 0; i < n; i++)
    {
        printf("%c", word[i]);
    }

    int diff = len - n;
    for (int i = diff; i < len; i++)
    {
        printf("%c", word[i]);
    }
}

int main(void)
{
    solve();
    return 0;
}