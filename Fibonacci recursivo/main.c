/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 26-03-2025
 */

 #include <stdio.h>

 int findFibonacciNum(int n, int *count)
 {
     (*count)++;
     if (n <= 1)
     {
         return n;
     }
     
     return findFibonacciNum(n - 1, count) + findFibonacciNum(n - 2, count);
 }
 
 int main(void)
 {
     int n, count = 0;
     scanf("%d", &n);
 
     int result = findFibonacciNum(n, &count);
     printf("%d %d\n", result, count);
     return 0;
 }