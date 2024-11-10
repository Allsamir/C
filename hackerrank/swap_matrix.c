#include <stdio.h>

int main(void)
{
          int n, m;

          scanf("%d%d", &n, &m);

          int arr[n][m];

          // Taking Inputs

          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < m; j++)
                    {
                              scanf("%d", &arr[i][j]);
                    }
          }

          // changes

          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < m; j++)
                    {
                              // column changes done
                              int temp = arr[i][m - 1];

                              if (j == (m - 1))
                              {
                                        arr[i][j] = arr[i][0];
                                        arr[i][0] = temp;
                              }
                    }
          }

          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < m; j++)
                    {
                              // row changes

                              if (i == 0)
                              {
                                        int tempr = arr[n - 1][j];
                                        arr[n - 1][j] = arr[i][j];
                                        arr[i][j] = tempr;
                              }
                    }
          }

          // output

          for (int i = 0; i < n; i++)
          {
                    for (int j = 0; j < m; j++)
                    {
                              printf("%d ", arr[i][j]);
                    }

                    printf("\n");
          }
}
