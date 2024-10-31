#include <stdio.h>

int main(void)
{
          int n, x, y;

          scanf("%d%d%d", &n, &x, &y);

          int arr[n];

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          int phone_available = 0;

          for(int z = 0; z < n; z++)
          {
                    if(arr[z] >= x && arr[z] <= y)
                    {
                              phone_available++;
                    }
          }

          printf("%d\n", phone_available);
}