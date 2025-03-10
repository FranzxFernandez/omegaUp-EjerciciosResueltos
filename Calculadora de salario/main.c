#include <stdio.h>

inline float calcular_salario_normal(short horas, float tarifa_por_hora);
inline float calcular_salario_extra(short horas_extra, float tarifa_por_hora);
inline float calcular_salario_extra_doble(short horas_extra_doble, float tarifa_por_hora);

inline short calcular_horas_extra(short horas);
inline short calcular_horas_extra_doble(short horas);

int main(void)
{

    short horas = 0;
    float tarifa_hora = 0, salario_normal = 0, salario_extra = 0, salario_extra_doble = 0, salario_total = 0;

    (void)scanf("%hd %f", &horas, &tarifa_hora);

    salario_normal = calcular_salario_normal(horas, tarifa_hora);

    short horas_extra = calcular_horas_extra(horas);
    salario_extra = calcular_salario_extra(horas_extra, tarifa_hora);

    short horas_extra_doble = calcular_horas_extra_doble(horas);
    salario_extra_doble = calcular_salario_extra_doble(horas_extra_doble, tarifa_hora);

    salario_total = salario_normal + salario_extra + salario_extra_doble;
    printf("%g\n", salario_total);

    return 0;
}

float calcular_salario_normal(short horas, float tarifa_por_hora)
{
    short horas_normales = horas > 40 ? 40 : horas;
    return horas_normales * tarifa_por_hora;
}

float calcular_salario_extra(short horas_extra, float tarifa_por_hora)
{
    return horas_extra * tarifa_por_hora * 1.5;
}

float calcular_salario_extra_doble(short horas_extra_doble, float tarifa_por_hora)
{
    return horas_extra_doble * tarifa_por_hora * 2;
}

short calcular_horas_extra(short horas)
{
    if (horas > 40 && horas <= 50)
    {
        return horas - 40; // Horas entre 41 y 50
    }
    return (horas > 50) ? 10 : 0; // Máximo 10 horas extra normales
}

short calcular_horas_extra_doble(short horas)
{
    return (horas > 50) ? (horas - 50) : 0;
}