#include <stdio.h>

int main()
{
          int n;
          scanf("%2d", &n);


          int n1 = n / 10;
          int n2 = n % 10;
          if ((n2 != 0 && n1 % n2 == 0) || n1 != 0 && n2 % n1 == 0)
          {
                    printf("YES\n");
          }
          else
          {
                    printf("NO\n");
          }
          return 0;
}