#include <stdio.h>
void shiftElements(int *arr, int len);
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

          for (int x = 0; x < n; x++)
          {
                    if (arr[x] == 0)
                    {
                              shiftElements(arr, n);
                    }
          }

          for (int x = 0; x < n; x++)
          {
                    printf("%d ", arr[x]);
          }

          return 0;
}

void shiftElements(int *arr, int len)
{
          for (int x = 0; x < len - 1; x++)
          {
                    if (arr[x] == 0)
                    {
                              int temp = arr[x + 1];
                              arr[x] = temp;
                              arr[x + 1] = 0;
                    }
          }
}