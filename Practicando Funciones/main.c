#include <stdio.h>

static inline int funcion_g(int b, int c);
static inline int funcion_f(int a);
int funcion_h(int x, int y, int z);

int main(void)
{
    short x, y, z;
    (void)scanf("%hd %hd %hd", &x, &y, &z);

    printf("%d\n", funcion_h(x, y, z));
    return 0;
}

inline int funcion_g(int b, int c)
{
    const int _segunda_potenica = c * c;
    return (7 * b - 3) % (_segunda_potenica + 1);
}

inline int funcion_f(int a)
{
    const int _tercera_potencia = a * a * a;
    return 4 * _tercera_potencia + funcion_g(2 * a, -3 * a);
}

int funcion_h(int x, int y, int z)
{
    return funcion_f(x / y) + 3 * funcion_g(z / y, x);
}
