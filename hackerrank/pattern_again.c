#include <stdio.h>

int main(void)
{         
          // take the input 
          int n;
          scanf("%d", &n);

          // print the first half of the pattern
          for(int i = 1; i <= n; i++)
          {
                    for(int j = 1; j <= i; j++)
                    {
                              printf("%d", j);
                    }
                    printf("\n");
          }
          
          // print the second half of the pattern in reverse order

          for(int i = 1; i < n; i++)
          {
                    for (int j = 1; j <= i; j++)
                    {
                              printf(" ");
                    }

                    for(int x = 1; x <= n-i; x++)
                    {
                              printf("%d", x);
                    }
                    printf("\n");
          }
}