#include <stdio.h>

int arr[100000];
int main(void)
{
          int length;
          scanf("%d", &length);

          for (int i = 0; i < length; i++)
          {
                    scanf("%d", &arr[i]);
          }

          int index, value;

          scanf("%d %d", &index, &value);

          // insertion

          for (int x = length; x >= index; x--)
          {
                    arr[x] = arr[x - 1];
          }

          // real insertion

          arr[index] = value;

          for (int y = 0; y <= length; y++)
          {
                    printf("%d ", arr[y]);
          }
}