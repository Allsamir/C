#include <stdio.h>

int printMax(int *arr, int len, int str, int max);

int main()
{
          // Write C code here

          int n;
          scanf("%d", &n);

          int arr[n];

          for (int x = 0; x < n; x++)
          {
                    scanf("%d", &arr[x]);
          }
          
          int max = arr[0];

          printf("%d", printMax(arr, n, 0, max));

          return 0;
}

int printMax(int *arr, int len, int str, int max)
{

          if (arr[str] > max)
          {
                    max = arr[str];
          }
          if (str == len - 1)
                    return max;
          printMax(arr, len, str + 1, max);
}