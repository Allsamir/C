#include <stdio.h>
#include <math.h>
int main(void)
{
          int n;

          scanf("%d", &n);

          int arr[n][n];

          for(int i = 0; i < n; i++)
          {
                    for(int j = 0; j < n; j++)
                    {
                              scanf("%d", &arr[i][j]);
                    }
          }

          int main_digonal = 0, second_digonal = 0;

          for (int i = 0; i < n; i++)
          {
                    for(int j = 0; j < n; j++)
                    {
                              if(i == j) // main_digonal
                              {
                                        main_digonal+= arr[i][j];
                              }

                              if(i + j == n - 1)
                              {
                                        second_digonal+= arr[i][j];
                              }
                    }
          }

          int diff = abs(main_digonal - second_digonal);

          printf("%d", diff);
          
}