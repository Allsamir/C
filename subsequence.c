#include <stdio.h>
#include <string.h>

int main(void)
{
          char str[10000];

          scanf("%s", str);

          char main[5] = "hello";

          int i = 0;
          int x = 0;
          while(str[i] != '\0')
          {
                    if(str[i] == main[x])
                    {
                              x++;
                    }  

                    if(x == 5)
                    {
                              printf("YES\n");
                              return 0;
                    }

                    i++;
          }

          printf("NO\n");
          return 0;

}