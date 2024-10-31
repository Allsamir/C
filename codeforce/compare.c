#include <stdio.h>
#include <string.h>

int main(void)
{
          char str[21];
          char str2[21];

          scanf("%s", str);
          scanf("%s", str2);

          if(strcmp(str, str2) == 0)
          {
                    printf("%s", str);
          }
          else if (strcmp(str, str2) < 0)
          {
                    printf("%s", str);
          }
          else 
          {
                    printf("%s", str2);
          }
}