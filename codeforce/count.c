#include <stdio.h>
#include <string.h>
int main(void)
{
          char str[1000000];
          scanf("%s", str);

          int sum = 0;

          for (int i = 0, length = strlen(str); i < length; i++)
          {
                    int num = str[i] - '0';
                    sum += num;
          }

          printf("%d", sum);
}