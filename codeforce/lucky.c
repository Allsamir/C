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

          int min = arr[0];

          // find the minimum value;
          for(int x = 0; x < n; x++)
          {
                    if(arr[x] < min)
                    {
                              min = arr[x];
                    }
          }

          // find how many elements in the array with minimum value;
          int minElements = 0;
          for(int z = 0; z < n; z++)
          {
                    if(arr[z] == min)
                    {
                              minElements++;
                    }
          }

         minElements % 2 != 0 ? printf("Lucky\n") : printf("Unlucky\n");
}