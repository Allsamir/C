#include <stdio.h>

int main()
{
          int n;
          scanf("%d", &n);
          int rows = n * 2;
          int starts = 1;
          for (int i = 0; i < n; i++)
          {
                    for (int i = 1; i < rows / 2; i++)
                    {
                              printf(" ");
                    }

                    for (int i = 0; i < starts; i++)
                    {
                              printf("*");
                    }
                    printf("\n");
                    starts += 2;
                    rows -= 2;
          }
          return 0;
}