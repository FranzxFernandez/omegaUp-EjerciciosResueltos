#include <stdio.h>

int main()
{
    int p, n;
    scanf("%d", &n);

    int arr[20]; // el arreglo es de 20 elementos
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &p);

    if (p == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0) // valores pares
                printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else if (p == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1) // valores impares
                printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
