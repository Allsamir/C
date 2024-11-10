// Online C compiler to run C program online
#include <stdio.h>

int main()
{
          // Write C code here

          int x, y;

          scanf("%d %d", &x, &y);

          int arr[x][y];

          for (int i = 0; i < x; i++)
          {
                    for (int j = 0; j < x; j++)
                    {
                              scanf("%d", &arr[i][j]);
                    }
          }

          // Checking for Jadu matrix

          for (int i = 0; i < x; i++)
          {
                    for (int j = 0; j < x; j++)
                    {
                              if (i == j)
                              {

                                        if (arr[i][j] != 1)
                                        {
                                                  printf("NO\n");
                                                  return 0; 
                                        }
                              }
                              else if(j == (x - (i + 1)))
                              {
                                        if (arr[i][j] != 1)
                                        {
                                                  printf("NO\n");
                                                  return 0;
                                        }
                              }
                              else if(arr[i][j] != 0)
                              {
                                        printf("NO\n");
                                        return 0;
                              }
                    }
          }

          printf("YES\n");

          return 0;
}