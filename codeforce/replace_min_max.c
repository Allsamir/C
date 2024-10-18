#include <stdio.h>

int main(void)
{
          int n;

          scanf("%d", &n);

          int arr[n];
          
          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          int max = arr[0];
          int maxIndex = 0;
          int min = arr[0];
          int minIndex = 0;

          // find max,min number and it's index
          for(int x = 0; x < n; x++)
          {
                    if(arr[x] > max)
                    {
                              max = arr[x];
                              maxIndex = x;
                    }

                    if(arr[x] < min)
                    {
                              min = arr[x];
                              minIndex = x;
                    }
          }

          arr[minIndex] = max;
          arr[maxIndex] = min;

          for(int i = 0; i < n; i++)
          {
                    printf("%d ", arr[i]);
          }
}