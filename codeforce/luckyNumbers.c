#include <stdio.h>

// This is how we can access each value of a decimal number. like 9999, we can access each value of 9999
int is_lucky(int num)
{
          while (num > 0)
          {
                    int digit = num % 10;
                    if (digit != 4 && digit != 7)
                    {
                              return 0;
                    }
                    num /= 10;
          }
          return 1;
}

void find_lucky_numbers(int A, int B)
{
          int found_lucky = 0;
          for (int num = A; num <= B; num++)
          {
                    if (is_lucky(num))
                    {
                              printf("%d ", num);
                              found_lucky = 1;
                    }
          }
          if (!found_lucky)
          {
                    printf("-1\n");
          }
}

int main()
{
          int A, B;
          scanf("%d %d", &A, &B);
          find_lucky_numbers(A, B);
          return 0;
}