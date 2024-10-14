#include <stdio.h>

int main ()
{
          int n;
          scanf("%d", &n);

          int arr[n];

          int even=0;
          int odd=0;
          int negative=0;
          int positive=0;

          for(int i = 0; i < n; i++)
          {
                    
                    scanf("%d", &arr[i]);

                    if(arr[i] % 2 == 0)
                    {
                              even++;
                    }
                    else
                    {
                              odd++;
                    }

                    if (arr[i] < 0)
                    {
                              negative++;
                    }
                    else
                    {
                              positive++;
                    }
          }

          printf("Even: %d\n", even);
          printf("Odd: %d\n", odd);
          printf("Positive: %d\n", positive);
          printf("Negative: %d\n", negative);
          return 0;
}