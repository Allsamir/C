#include <stdio.h>

int main(void)
{
          int n;
          scanf("%d", &n);

          int arr[n];
          int reversedArr[n];

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          for(int x = 1; x <= n; x++)
          {
                    reversedArr[n - x] = arr[x - 1];
          }

          for(int y = 0; y < n; y++)
          {
                    printf("%d ", reversedArr[y]);
          }
}