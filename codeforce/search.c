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

          int x;
          scanf("%d", &x);

          for(int y = 0; y < n; y++)
          {
                    if(arr[y] == x)
                    {
                              printf("%d", y);
                              return 0;
                    }
          }

          printf("%d", -1);
}