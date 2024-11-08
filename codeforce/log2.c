#include <stdio.h>
#include <math.h>

void printLog2(long long n);
int main(void)
{
          long long n;

          scanf("%lld", &n);

          printLog2(n);
}

void printLog2(long long n)
{
          printf("%lld", (long long) log2(n));
}