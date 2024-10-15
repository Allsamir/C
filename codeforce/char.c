#include <stdio.h>
#include <ctype.h>
int main(void)
{
          char n;
          scanf("%c", &n);
          
          // convertions of given character
          isupper(n) ? printf("%c", tolower(n)) : printf("%c", toupper(n));
}