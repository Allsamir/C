#include <stdio.h>

int main(void)
{
          int n;
          printf("Number: ");
          scanf("%d", &n);

          int sum = 0;
          while(n > 0)
          {
                    sum += n % 10; // adding the last digit
                    n /= 10; // removing the last digit
          }
          printf("The sum is: %d\n", sum);
}