#include <stdio.h>

int main(void)
{
          int n;
          scanf("%d", &n);

          if(n == 2)
          {
                    printf("YES\n");
          }
          else if(n == 1 || n < 1)
          {
                    printf("NO\n");
          }
          else
          {
                    for(int i = 2; i < n; i++)
                    {
                              if(n % i == 0)
                              {         
                                        printf("NO\n");
                                        return 0;
                              }
                    }

                    printf("YES\n");
          }
}