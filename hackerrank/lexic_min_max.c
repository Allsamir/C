#include <stdio.h>
#include <string.h>

int main(void)
{
          char str1[1001];
          char str2[1001];
          char str3[1001];

          scanf("%s %s %s", str1, str2, str3);

          // Finding the minimum lexicographical string

          if (strcmp(str2, str1) > 0 && strcmp(str3, str1) > 0)
          {

                    printf("%s\n", str1);
          }
          else if (strcmp(str1, str2) > 0 && strcmp(str3, str2) > 0)
          {
                    printf("%s\n", str2);
          }
          else
          {
                    printf("%s\n", str3);
          }

          // Finding the maximum lexicographical string
          if (strcmp(str2, str1) < 0 && strcmp(str3, str1) < 0)
          {

                    printf("%s\n", str1);
          }
          else if (strcmp(str1, str2) < 0 && strcmp(str3, str2) < 0)
          {
                    printf("%s\n", str2);
          }
          else
          {
                    printf("%s\n", str3);
          }

          return 0;
}
