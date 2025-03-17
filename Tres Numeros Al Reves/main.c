/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 17-03-2025
 */

#include <stdio.h>


int main(void)
{
    int a, b, c, num = 0;
    scanf("%d %d %d", &a, &b, &c);

    // formando el numero
    num = a * 100 + b * 10 + c * 1; // 300 + 40 + 5 = 345
    
    while (num != 0)
    {
        int rest = num % 10;
        num /= 10;

        printf("%d\n", rest);
    }
    
    return 0;
}
