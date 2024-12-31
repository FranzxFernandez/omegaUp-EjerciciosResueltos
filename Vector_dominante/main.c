#include <stdio.h>
#include <stdlib.h>

void solve(void) {
    int size;
    scanf("%d", &size);

    int *array1 = (int*)malloc(size * sizeof(int));
    int *array2 = (int*)malloc(size * sizeof(int));

    if (array1 == NULL || array2 == NULL) {
        free(array1);
        free(array2);
        return;
    }

    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < size; i++) {
        if (array1[i] <= array2[i]) {
            printf("0\n");
            free(array1);
            free(array2);
            return;
        }
    }

    printf("1\n");
    free(array1);
    free(array2);
}

int main(void) {
    solve();
    return 0;
}
