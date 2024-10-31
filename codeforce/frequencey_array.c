#include <stdio.h>
#include <string.h>
int main(void)
{
          int n, m;

          scanf("%d%d", &n, &m);

          int arr[n];
          int f_arr[100000] = {0};

          // promting user
          for (int i = 0; i < n; i++)
          {
                    scanf("%d", &arr[i]);
          }

          // counting frequency
          for (int x = 0; x < n; x++)
          {         
                    if(f_arr[arr[x]] >= 0)
                    {
                              f_arr[arr[x]]++;
                    }
          }

          // printing frequency of each number in the range [1, m]
          for (int z = 1; z <= m; z++)
          {

                    printf("%d\n", f_arr[z]);
          }
}