/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 25-04-2025
 */

#include <stdio.h>
#include <stdlib.h>

// Useful macros
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define abs(x)    ((x) < 0 ? -(x) : (x))

// #define swap(a, b) {typeof(a) temp = a; a = b; b = temp;}

// Fast input (both positive and negative integers and better for large inputs)
int readint(void) {
    int n = 0;
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

#define MOD 1000000007LL

void solve(void) {
    // long long int n = readint();
    long long n;
    scanf("%lld", &n);

    long long* array = malloc(n * sizeof(long long int));
    if (!array) {
        return;
    }

    for (long long i = 0; i < n; i++) {
        scanf("%lld", &array[i]);
        array[i] %= MOD;
    }

    long long* pref = malloc((n + 1) * sizeof(long long));
    if (!pref) {
        free(array);
        return;
    }
    pref[0] = 0;
    for (long long i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + array[i - 1];
        if (pref[i] >= MOD) {
            pref[i] -= MOD;
        }
    }

    long long m;
    scanf("%lld", &m);
    while (m--) {
        long long p, q;
        scanf("%lld %lld", &p, &q);

        // Sumando en O(1) usando prefijos
        long long ans = pref[q] - pref[p - 1];
        if (ans < 0) {
            ans += MOD;
        }
        printf("%lld\n", ans);
    }

    free(array);
    free(pref);
}

int main(void) {
    solve();
    return 0;
}