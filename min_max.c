#include <stdio.h>

int main ()
{
          int n;
          scanf("%d", &n);

          int arr[n];

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          int min = arr[0];
          int max = arr[0];

          for(int i = 0; i < n; i++)
          {
                    if(arr[i] < min)
                    {
                              min = arr[i];
                    }
                    if(arr[i] > max)
                    {
                              max = arr[i];
                    }
          }

          printf("Minimum: %d\n", min);
          printf("Maximum: %d\n", max);

          return 0;
}