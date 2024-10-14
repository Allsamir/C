#include <stdio.h>

int main()
{
          int n;
          scanf("%d", &n);
          int arr[n];
          // sum of the elements
          int sum = 0;

          for(int i = 0; i < n; i++)
          {         
                    scanf("%d", &arr[i]);
                    sum += arr[i];
          }
          printf("avg of all elements in the array: %f\n", (float) sum / (float) n);
}