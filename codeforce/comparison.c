#include <stdio.h>

int main (void)
{
          int a, b;
          char c;
          scanf("%d %c %d", &a, &c, &b);

          if(c == 60)
          {
                    a < b ? printf("Right") : printf("Wrong");
          }
          else if(c == 62)
          {
                    a > b ? printf("Right") : printf("Wrong");
          }
          else
          {
                    a == b ? printf("Right") : printf("Wrong");
          }
}