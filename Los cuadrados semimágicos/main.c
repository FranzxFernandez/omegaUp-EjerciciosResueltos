/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 10-04-2025
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 // Useful macros
 #define max(a, b) ((a) > (b) ? (a) : (b))
 #define min(a, b) ((a) < (b) ? (a) : (b))
 #define abs(x) ((x) < 0 ? -(x) : (x))
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
 void readstr(char *str) {
     char c;
     while ((c = getchar()) > ' ') *str++ = c;
     *str = 0;
 }
 
 // Comparison function for qsort (ascending)
 int compare_asc(const void *a, const void *b) {
     int x = *(int *)a;
     int y = *(int *)b;
     if (x < y) return -1;
     if (x > y) return 1;
     return 0;
 }
 
 // Comparison function for qsort (descending)
 int compare_desc(const void *a, const void *b) {
     int x = *(int *)a;
     int y = *(int *)b;
     if (x < y) return 1;
     if (x > y) return -1;
     return 0;
 }
 
 /*////////////////////////////////////////////////////////////*/
 
 int solve(void) {
     int n = readint();
 
     int **matrix = malloc(n * sizeof(int *));
     if (!matrix) {
         return -1;
     }
 
     // Allocando espacio para cada fila
     for (int i = 0; i < n; i++) {
         matrix[i] = malloc(n * sizeof(int));
         if (!matrix[i]) {
             return -1;
         }
     }
 
     // Initialisar
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             matrix[i][j] = readint();
         }
     }
 
     int overall_sum = 0;
     for (int j = 0; j < n; j++) {
         overall_sum += matrix[0][j];
     }
     // printf("Sum = %d\n", overall_sum);
     // printf("Matrix last = %d\n", matrix[n - 1][n - 1]);
 
     // Descartando matrix suma de filas diferente
     for (int i = 0; i < n; i++) {
         int current_row_sum = 0;
         for (int j = 0; j < n; j++) {
             current_row_sum += matrix[i][j];
         }
 
         if (current_row_sum != overall_sum) {
             for (int i = 0; i < n; i++) {
                 free(matrix[i]);
             }
             free(matrix);
             return 0;
         }
     }
 
     // Descartando matrix suma de columnas diferente
     for (int j = 0; j < n; j++) {
         int current_col_sum = 0;
         for (int i = 0; i < n; i++) {
             current_col_sum += matrix[i][j];
         }
 
         if (current_col_sum != overall_sum) {
             for (int i = 0; i < n; i++) {
                 free(matrix[i]);
             }
             free(matrix);
             return 0;
         }
     }
 
     // Descartando matrix suma de diagonales diferentes
     int left_diagonal_sum = 0, right_diagonal_sum = 0;
     for (int i = 0; i < n; i++) {
         left_diagonal_sum += matrix[i][i];
         right_diagonal_sum += matrix[i][n - 1 - i];
     }
 
     if (left_diagonal_sum != overall_sum || right_diagonal_sum != overall_sum) {
         for (int i = 0; i < n; i++) {
             free(matrix[i]);
         }
         free(matrix);
         return 0;
     }
 
     // Liberamos cada fila
     for (int i = 0; i < n; i++) {
         free(matrix[i]);
     }
 
     // Liberamos el arreglo de punteros
     free(matrix);
 
     return 1;
 }
 
 int main(void) {
     printf("%d\n", solve());
     return 0;
 }