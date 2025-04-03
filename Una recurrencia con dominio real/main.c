/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 03-04-2025
 */

#include <stdio.h>

#define MAX_KEY 1001

long long memo[MAX_KEY];
int computed[MAX_KEY]; // 1 si ya fue calculado

long long int computeRecurrence(double x)
{
    long long result;
    int key = (int)(x * 10 + 0.1);
    if (computed[key])
    {
        return memo[key];
    }

    if (x <= 2.0f)
    {
        result = 1;
    }

    if (x > 2.0f && (x != (int)x)) // y no es entero
    {
        result = computeRecurrence((int)x) + 2;
    }
    else if (x > 2.0f && (x == (int)x) && (((int)x % 2) == 0)) // y es entero y par entonces
    {
        result = computeRecurrence(x - 1) + computeRecurrence(x - 2);
    }
    else if (x > 2.0f && (x == (int)x) && (((int)x % 2) != 0)) // y es entero e impar entonces
    {
        result = computeRecurrence(x - 1) + computeRecurrence(x / 2) + 1;
    }

    memo[key] = result;
    computed[key] = 1;
    return result;
}

int main(void)
{
    double x;
    scanf("%lf", &x);

    long long result = computeRecurrence(x);
    printf("%lld\n", result);

    return 0;
}