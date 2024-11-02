#include <stdio.h>
#include <math.h>

int main(void)
{
          int n, m;

          scanf("%d%d", &n, &m);

          int *p = &n;
          int *q = &m;

          int diff = *p - *q;

          printf("%d\n", abs(diff));
}