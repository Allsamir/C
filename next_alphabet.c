#include <stdio.h>

int main () 
{
          char i;
          scanf("%c", &i);
          if(i >= 122)
          {
                    i = i - 26;
          }
          printf("%c", i + 1);
          return 0;
}