/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 19-04-2025
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
    // if (c == '-') {
    //     sign = -1;
    //     c = getchar();
    // }
    while (c >= '0' && c <= '9') {
        n = n * 10 + (c - '0');
        c = getchar();
    }
    return n;
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

void solve(void) {
    int n = readint();
    int q = readint();

    int array_n[n];
    //int array_q[q];

    for (int i = 0; i < n; i++) {
        array_n[i] = readint();
    }

    for (int i = 0; i < q; i++) {
        int value = readint();
        //int value = array_q[i];
        printf("%d ", array_n[value - 1]);
    }
}

int main(void) {
    solve();
    return 0;
}