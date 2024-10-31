#include <stdio.h>

int main(void)
{
          int n;
          scanf("%d", &n);

          for(int i = 0; i < n; i++)
          {         
                    char str[100];
                    scanf("%s", str);

                    int length = 0;

                    for(int x = 0; str[x] != '\0'; x++)
                    {
                              length++;
                    }

                    if(length > 10)
                    {
                              printf("%c", str[0]);
                              printf("%d", length - 2);
                              printf("%c", str[length - 1]);
                              printf("\n");
                    }
                    else 
                    {
                              printf("%s\n", str);
                    }
          }
}