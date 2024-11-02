#include <stdio.h>

int main(void)
{
          int n, m, x;

          scanf("%d%d%d", &n, &m, &x);

          int arr[n][m];

          // matrix inputs
          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < m; j++)
                    {
                              scanf("%d", &arr[i][j]);
                    }
          }

          int sec_arr[x];

          // elements to search inputs

          for(int i = 0; i < x; i++)
          {
                    scanf("%d", &sec_arr[i]);
          }

          // searching the elements
          for(int i = 0; i < x; i++)
          {
                    int count = 0;
                    for (int j = 0; j < n; j++)
                    {
                              for(int k = 0; k < m; k++)
                              {
                                        if(arr[j][k] == sec_arr[i])
                                        {
                                                  count++;
                                        }
                              }
                    }

                    printf("%d\n", count);
          }
          return 0;
}