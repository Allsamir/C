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
          int position = 1;
          for(int x = 0; x < n; x++)
          {
                    if (arr[x] < min )
                    {
                              min = arr[x];
                              position = x + 1;
                    }
          }

          printf("%d %d", min, position);
}