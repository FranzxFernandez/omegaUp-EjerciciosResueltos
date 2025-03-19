/*
 * Author: Franz Fernandez Cobarrubia
 * Date: 19-03-2025
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 void solve(void)
 {
 
     int len;
     scanf("%d", &len);
 
     int *array = malloc(len * sizeof(int));
     if (!array)
     {
         return;
     }
 
     int sum = 0;
     int maximum = 0;
     for (int i = 0; i < len; i++)
     {
         scanf("%d", &array[i]);
         sum += array[i];
 
         if (sum < 0)
         {
             sum = 0;
         }
 
         if (sum > maximum)
         {
             maximum = sum;
         }
     }
 
     printf("%d\n", maximum);
     free(array);
 }
 
 int main(void)
 {
     solve();
     return 0;
 }