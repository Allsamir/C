#include <stdio.h>

int main()
{
          int n;

          scanf("%d", &n);

          for (int x = 1; x <= n; x++)
          {

                    for (int i = 1; i <= 10; i++)
                    {
                              printf("%d X %d = %d\n", x, i, x * i);
                    }
                    printf("\n\n");
          }

          return 0;
}