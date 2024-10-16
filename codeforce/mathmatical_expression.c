#include <stdio.h>

int main (void)
{
          int a, b, c;
          char s, q;
          scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

          if(s == '+')
          {
                    (a + b) == c ? printf("Yes") : printf("%d", a + b);
          }
          else if(s == '-')
          {
                    (a - b) == c ? printf("Yes") : printf("%d", a - b);
          }
          else if(s == '*')
          {
                    (a * b) == c ? printf("Yes") : printf("%d", a * b);
          }
          return 0;
}