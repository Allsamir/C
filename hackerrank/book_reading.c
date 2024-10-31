#include <stdio.h>

int main(void)
{
          int n, t;

          scanf("%d%d", &n, &t);

          int arr[n];

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          int sum = 0;
          int x = 0;
          while(sum < t)
          {
                    sum+=arr[x++];
          }

          if(sum > t)
          {
                    x--;
                    sum -= arr[x];
          }

          printf("%d\n", x);
}