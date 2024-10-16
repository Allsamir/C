#include <stdio.h>

int main(void)
{
          long long a, b, k;

          scanf("%lld %lld %lld", &a, &b, &k);

          a % k == 0 && b % k == 0 ? printf("Both\n")
          : a % k == 0 ? printf("Memo\n")
          : b % k == 0 ? printf("Momo\n")
          : printf("No One\n");

}