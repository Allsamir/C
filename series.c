#include <stdio.h>

int main(void)
{
          int n;
          printf("N: ");
          scanf("%d", &n);

          int start = -1; // starting point
          int i = 3;
          for(int x = 0; x < n; x++)
          {
                    printf("%d ", start);
                    start = start + i;
                    i += 2;
          }
}