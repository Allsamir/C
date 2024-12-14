#include <stdio.h>

int main()
{
          int n;
          scanf("%d", &n);
          int a_ = 0;
          for (int i = 1; i <= n; i++)
          {
                    if (n % i == 0)
                    {
                              printf("%d\n", i);
                    }
          }
          return 0;
}