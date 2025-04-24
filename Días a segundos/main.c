/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 24-04-2025
 */

#include <stdio.h>

void solve(void) {
    int n;
    while (scanf("%d", &n) == 1) {
        int result = n * 86400;
        printf("%d\n", result);
    }
}

int main(void) {
    solve();
    return 0;
}