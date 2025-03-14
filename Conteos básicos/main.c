/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 14-03-2025
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i < b + 1; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
