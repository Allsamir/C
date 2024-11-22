#include <stdio.h>

void fibonacci_sequence(int n);

int main(void)
{
          int n;
          printf("Enter N: ");
          scanf("%d", &n);

          fibonacci_sequence(n);
          return 0;
}

void fibonacci_sequence(int n)
{
          int a = 0, b = 1, next;

          printf("Series: %d, %d", a, b);

          for(int x = 2; x <= n; x++)
          {
                    next = a + b;
                    printf(", %d", next);
                    a = b;
                    b = next;
          }
}