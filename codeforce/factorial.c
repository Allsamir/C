#include <stdio.h>
long long factorial(int z);
int main(void)
{
          int n;

          scanf("%d", &n);

          printf("%lld\n", factorial(n));
}

long long factorial(int z)
{
          if (z == 1)
          {
                    return 1;
          }

          return z * factorial(z - 1);
}