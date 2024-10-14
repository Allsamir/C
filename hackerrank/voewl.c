#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
          char c;
          scanf("%c", &c);

          if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
          {
                    printf("Vowel\n");
          }
          else
          {
                    printf("Consonant\n");
          }
          /* Enter your code here. Read input from STDIN. Print output to STDOUT */
          return 0;
}