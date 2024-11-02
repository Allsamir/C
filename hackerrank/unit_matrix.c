#include <stdio.h>

int main(void)
{
          int n;
          scanf("%d", &n);

          int arr[n][n];

          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < n; j++)
                    {
                              scanf("%d", &arr[i][j]);
                    }
          }

          for (int x = 0; x < n; x++)
          {
                    for (int y = 0; y < n; y++)
                    {
                              if (x == y)
                              {
                                        if (arr[x][y] != 1)
                                        {
                                                  printf("NO\n");
                                                  return 0;
                                        }
                              }
                              else if (arr[x][y] != 0)
                              {

                                        printf("NO\n");
                                        return 0;
                              }
                    }
          }

          printf("YES\n");
          return 0;
}