/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 12-04-2025
 */

#include <stdio.h>

// Useful macros
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define abs(x)    ((x) < 0 ? -(x) : (x))

// #define swap(a, b) {typeof(a) temp = a; a = b; b = temp;}

// Fast input (both positive and negative integers and better for large inputs)
int readint(void) {
    int n = 0, sign = 1;
    int c = getchar();
    if (c == '-') {
        sign = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        n = n * 10 + (c - '0');
        c = getchar();
    }
    return n * sign;
}

// Fast string input (only to read a single word with no spaces)
void readstr(char* str) {
    char c;
    while ((c = getchar()) > ' ') {
        *str++ = c;
    }
    *str = 0;
}

// Comparison function for qsort (ascending)
int compare_asc(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) {
        return -1;
    }
    if (x > y) {
        return 1;
    }
    return 0;
}

// Comparison function for qsort (descending)
int compare_desc(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) {
        return 1;
    }
    if (x > y) {
        return -1;
    }
    return 0;
}

/*////////////////////////////////////////////////////////////*/

#define MAX_VALUE 90000

void solve(void) {
    int n = readint();
    //int array[n];
    int occurrences[MAX_VALUE + 1] = {0};

    int maxFrecuency = 0;
    int maxTelefon = 0;

    for (int i = 0; i < n; i++) {
        //array[i] = readint();
        int telefon = readint();

        occurrences[telefon - 10000]++; // Guardar la frecuencia de cada telefono

        if (occurrences[telefon - 10000] > maxFrecuency) {
            maxFrecuency = occurrences[telefon - 10000];
            maxTelefon = telefon;
        }
    }
    printf("%d %d\n", maxFrecuency, maxTelefon);
}

int main(void) {
    solve();
    return 0;
}