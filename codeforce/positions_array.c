#include <stdio.h>

int main ()
{
          int n;
          scanf("%d", &n);

          int num;

          for(int i = 0; i < n; i++)
          {
                    scanf("%d", &num);

                    if(num <= 10)
                    {
                              printf("A[%d] = %d\n", i, num);
                    }
          }

          return 0;
}