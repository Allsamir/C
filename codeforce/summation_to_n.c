#include <stdio.h>

int main(void)
{
          long long n;
          scanf("%lld", &n);

          long long sum = ((n + 1) * n) / 2;

          printf("%lld\n", sum);
}