#include <stdio.h>

int main(void)
{
          int n, m, x;

          scanf("%d%d", &n, &m);

          int arr[n][m];

          for(int i = 0; i < n; i++)
          {
                    for(int j = 0; j < m; j++)
                    {
                              scanf("%d", &arr[i][j]);
                    }
          }

          scanf("%d", &x);

          // searching the x in the matrix

          for(int i = 0; i < n; i++)
          {
                    for(int j = 0; j < m; j++)
                    {
                              if(arr[i][j] == x)
                              {
                                        printf("will not take number\n");
                                        return 0;
                              }
                    }
          }

          printf("will take number\n");
}