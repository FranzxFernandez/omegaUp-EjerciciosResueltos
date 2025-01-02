#include <stdio.h>

void solve(void) {
    char altura[1002]; // 1000 dígitos más el punto decimal y el terminador nulo.
    scanf("%s", &altura); // Tengo que usar char para poder representar los 0 < a < 10^1000 (mil ceros)
    printf("Tu altura es de %s metros! WOW\n", altura);
}

int main(void) {
    solve();
    return 0;
}